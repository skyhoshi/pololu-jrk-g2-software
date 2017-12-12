#include "jrk_internal.h"

// We apply the product name from the settings file first, and use it to set the
// defaults.
static jrk_error * apply_product_name(jrk_settings * settings, const char * product_name)
{
  uint32_t product;
  if (!jrk_name_to_code(jrk_product_names_short, product_name, &product))
  {
    return jrk_error_create("Unrecognized product name.");
  }
  jrk_settings_set_product(settings, product);
  jrk_settings_fill_with_defaults(settings);
  return NULL;
}

// Note: The range checking we do in this function is solely to make sure the
// value will fit in the argument to the setter function we call.  If the value
// is otherwise outside the allowed range, that will be checked in
// jrk_settings_fix.
static jrk_error * apply_string_pair(jrk_settings * settings,
  const char * key, const char * value, uint32_t line)
{
  if (!strcmp(key, "product"))
  {
    // We already processed the product field separately.
  }

  // Beginning of auto-generated settings file parsing code.

  else if (!strcmp(key, "input_mode"))
  {
    uint32_t input_mode;
    if (!jrk_name_to_code(jrk_input_mode_names_short, value, &input_mode))
    {
      return jrk_error_create("Unrecognized input_mode value.");
    }
    jrk_settings_set_input_mode(settings, input_mode);
  }
  else if (!strcmp(key, "input_disconnect_minimum"))
  {
    int64_t input_disconnect_minimum;
    if (jrk_string_to_i64(value, &input_disconnect_minimum))
    {
      return jrk_error_create("Invalid input_disconnect_minimum value.");
    }
    if (input_disconnect_minimum < 0 || input_disconnect_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_disconnect_minimum value is out of range.");
    }
    jrk_settings_set_input_disconnect_minimum(settings, input_disconnect_minimum);
  }
  else if (!strcmp(key, "input_disconnect_maximum"))
  {
    int64_t input_disconnect_maximum;
    if (jrk_string_to_i64(value, &input_disconnect_maximum))
    {
      return jrk_error_create("Invalid input_disconnect_maximum value.");
    }
    if (input_disconnect_maximum < 0 || input_disconnect_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_disconnect_maximum value is out of range.");
    }
    jrk_settings_set_input_disconnect_maximum(settings, input_disconnect_maximum);
  }
  else if (!strcmp(key, "input_minimum"))
  {
    int64_t input_minimum;
    if (jrk_string_to_i64(value, &input_minimum))
    {
      return jrk_error_create("Invalid input_minimum value.");
    }
    if (input_minimum < 0 || input_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_minimum value is out of range.");
    }
    jrk_settings_set_input_minimum(settings, input_minimum);
  }
  else if (!strcmp(key, "input_maximum"))
  {
    int64_t input_maximum;
    if (jrk_string_to_i64(value, &input_maximum))
    {
      return jrk_error_create("Invalid input_maximum value.");
    }
    if (input_maximum < 0 || input_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_maximum value is out of range.");
    }
    jrk_settings_set_input_maximum(settings, input_maximum);
  }
  else if (!strcmp(key, "input_neutral_minimum"))
  {
    int64_t input_neutral_minimum;
    if (jrk_string_to_i64(value, &input_neutral_minimum))
    {
      return jrk_error_create("Invalid input_neutral_minimum value.");
    }
    if (input_neutral_minimum < 0 || input_neutral_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_neutral_minimum value is out of range.");
    }
    jrk_settings_set_input_neutral_minimum(settings, input_neutral_minimum);
  }
  else if (!strcmp(key, "input_neutral_maximum"))
  {
    int64_t input_neutral_maximum;
    if (jrk_string_to_i64(value, &input_neutral_maximum))
    {
      return jrk_error_create("Invalid input_neutral_maximum value.");
    }
    if (input_neutral_maximum < 0 || input_neutral_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The input_neutral_maximum value is out of range.");
    }
    jrk_settings_set_input_neutral_maximum(settings, input_neutral_maximum);
  }
  else if (!strcmp(key, "output_minimum"))
  {
    int64_t output_minimum;
    if (jrk_string_to_i64(value, &output_minimum))
    {
      return jrk_error_create("Invalid output_minimum value.");
    }
    if (output_minimum < 0 || output_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The output_minimum value is out of range.");
    }
    jrk_settings_set_output_minimum(settings, output_minimum);
  }
  else if (!strcmp(key, "output_neutral"))
  {
    int64_t output_neutral;
    if (jrk_string_to_i64(value, &output_neutral))
    {
      return jrk_error_create("Invalid output_neutral value.");
    }
    if (output_neutral < 0 || output_neutral > UINT16_MAX)
    {
      return jrk_error_create(
        "The output_neutral value is out of range.");
    }
    jrk_settings_set_output_neutral(settings, output_neutral);
  }
  else if (!strcmp(key, "output_maximum"))
  {
    int64_t output_maximum;
    if (jrk_string_to_i64(value, &output_maximum))
    {
      return jrk_error_create("Invalid output_maximum value.");
    }
    if (output_maximum < 0 || output_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The output_maximum value is out of range.");
    }
    jrk_settings_set_output_maximum(settings, output_maximum);
  }
  else if (!strcmp(key, "input_invert"))
  {
    uint32_t input_invert;
    if (!jrk_name_to_code(jrk_bool_names, value, &input_invert))
    {
      return jrk_error_create("Unrecognized input_invert value.");
    }
    jrk_settings_set_input_invert(settings, input_invert);
    jrk_settings_set_input_invert(settings, input_invert);
  }
  else if (!strcmp(key, "input_scaling_degree"))
  {
    uint32_t input_scaling_degree;
    if (!jrk_name_to_code(jrk_input_scaling_degree_names_short, value, &input_scaling_degree))
    {
      return jrk_error_create("Unrecognized input_scaling_degree value.");
    }
    jrk_settings_set_input_scaling_degree(settings, input_scaling_degree);
  }
  else if (!strcmp(key, "input_power_with_aux"))
  {
    uint32_t input_power_with_aux;
    if (!jrk_name_to_code(jrk_bool_names, value, &input_power_with_aux))
    {
      return jrk_error_create("Unrecognized input_power_with_aux value.");
    }
    jrk_settings_set_input_power_with_aux(settings, input_power_with_aux);
    jrk_settings_set_input_power_with_aux(settings, input_power_with_aux);
  }
  else if (!strcmp(key, "input_analog_samples_exponent"))
  {
    int64_t input_analog_samples_exponent;
    if (jrk_string_to_i64(value, &input_analog_samples_exponent))
    {
      return jrk_error_create("Invalid input_analog_samples_exponent value.");
    }
    if (input_analog_samples_exponent < 0 || input_analog_samples_exponent > UINT8_MAX)
    {
      return jrk_error_create(
        "The input_analog_samples_exponent value is out of range.");
    }
    jrk_settings_set_input_analog_samples_exponent(settings, input_analog_samples_exponent);
  }
  else if (!strcmp(key, "feedback_mode"))
  {
    uint32_t feedback_mode;
    if (!jrk_name_to_code(jrk_feedback_mode_names_short, value, &feedback_mode))
    {
      return jrk_error_create("Unrecognized feedback_mode value.");
    }
    jrk_settings_set_feedback_mode(settings, feedback_mode);
  }
  else if (!strcmp(key, "feedback_disconnect_minimum"))
  {
    int64_t feedback_disconnect_minimum;
    if (jrk_string_to_i64(value, &feedback_disconnect_minimum))
    {
      return jrk_error_create("Invalid feedback_disconnect_minimum value.");
    }
    if (feedback_disconnect_minimum < 0 || feedback_disconnect_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The feedback_disconnect_minimum value is out of range.");
    }
    jrk_settings_set_feedback_disconnect_minimum(settings, feedback_disconnect_minimum);
  }
  else if (!strcmp(key, "feedback_disconnect_maximum"))
  {
    int64_t feedback_disconnect_maximum;
    if (jrk_string_to_i64(value, &feedback_disconnect_maximum))
    {
      return jrk_error_create("Invalid feedback_disconnect_maximum value.");
    }
    if (feedback_disconnect_maximum < 0 || feedback_disconnect_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The feedback_disconnect_maximum value is out of range.");
    }
    jrk_settings_set_feedback_disconnect_maximum(settings, feedback_disconnect_maximum);
  }
  else if (!strcmp(key, "feedback_minimum"))
  {
    int64_t feedback_minimum;
    if (jrk_string_to_i64(value, &feedback_minimum))
    {
      return jrk_error_create("Invalid feedback_minimum value.");
    }
    if (feedback_minimum < 0 || feedback_minimum > UINT16_MAX)
    {
      return jrk_error_create(
        "The feedback_minimum value is out of range.");
    }
    jrk_settings_set_feedback_minimum(settings, feedback_minimum);
  }
  else if (!strcmp(key, "feedback_maximum"))
  {
    int64_t feedback_maximum;
    if (jrk_string_to_i64(value, &feedback_maximum))
    {
      return jrk_error_create("Invalid feedback_maximum value.");
    }
    if (feedback_maximum < 0 || feedback_maximum > UINT16_MAX)
    {
      return jrk_error_create(
        "The feedback_maximum value is out of range.");
    }
    jrk_settings_set_feedback_maximum(settings, feedback_maximum);
  }
  else if (!strcmp(key, "feedback_invert"))
  {
    uint32_t feedback_invert;
    if (!jrk_name_to_code(jrk_bool_names, value, &feedback_invert))
    {
      return jrk_error_create("Unrecognized feedback_invert value.");
    }
    jrk_settings_set_feedback_invert(settings, feedback_invert);
    jrk_settings_set_feedback_invert(settings, feedback_invert);
  }
  else if (!strcmp(key, "feedback_power_with_aux"))
  {
    uint32_t feedback_power_with_aux;
    if (!jrk_name_to_code(jrk_bool_names, value, &feedback_power_with_aux))
    {
      return jrk_error_create("Unrecognized feedback_power_with_aux value.");
    }
    jrk_settings_set_feedback_power_with_aux(settings, feedback_power_with_aux);
    jrk_settings_set_feedback_power_with_aux(settings, feedback_power_with_aux);
  }
  else if (!strcmp(key, "feedback_dead_zone"))
  {
    int64_t feedback_dead_zone;
    if (jrk_string_to_i64(value, &feedback_dead_zone))
    {
      return jrk_error_create("Invalid feedback_dead_zone value.");
    }
    if (feedback_dead_zone < 0 || feedback_dead_zone > UINT8_MAX)
    {
      return jrk_error_create(
        "The feedback_dead_zone value is out of range.");
    }
    jrk_settings_set_feedback_dead_zone(settings, feedback_dead_zone);
  }
  else if (!strcmp(key, "feedback_analog_samples_exponent"))
  {
    int64_t feedback_analog_samples_exponent;
    if (jrk_string_to_i64(value, &feedback_analog_samples_exponent))
    {
      return jrk_error_create("Invalid feedback_analog_samples_exponent value.");
    }
    if (feedback_analog_samples_exponent < 0 || feedback_analog_samples_exponent > UINT8_MAX)
    {
      return jrk_error_create(
        "The feedback_analog_samples_exponent value is out of range.");
    }
    jrk_settings_set_feedback_analog_samples_exponent(settings, feedback_analog_samples_exponent);
  }
  else if (!strcmp(key, "feedback_wraparound"))
  {
    uint32_t feedback_wraparound;
    if (!jrk_name_to_code(jrk_bool_names, value, &feedback_wraparound))
    {
      return jrk_error_create("Unrecognized feedback_wraparound value.");
    }
    jrk_settings_set_feedback_wraparound(settings, feedback_wraparound);
    jrk_settings_set_feedback_wraparound(settings, feedback_wraparound);
  }
  else if (!strcmp(key, "serial_mode"))
  {
    uint32_t serial_mode;
    if (!jrk_name_to_code(jrk_serial_mode_names_short, value, &serial_mode))
    {
      return jrk_error_create("Unrecognized serial_mode value.");
    }
    jrk_settings_set_serial_mode(settings, serial_mode);
  }
  else if (!strcmp(key, "serial_baud_rate"))
  {
    int64_t serial_baud_rate;
    if (jrk_string_to_i64(value, &serial_baud_rate))
    {
      return jrk_error_create("Invalid serial_baud_rate value.");
    }
    if (serial_baud_rate < 0 || serial_baud_rate > UINT32_MAX)
    {
      return jrk_error_create(
        "The serial_baud_rate value is out of range.");
    }
    jrk_settings_set_serial_baud_rate(settings, serial_baud_rate);
  }
  else if (!strcmp(key, "serial_timeout"))
  {
    int64_t serial_timeout;
    if (jrk_string_to_i64(value, &serial_timeout))
    {
      return jrk_error_create("Invalid serial_timeout value.");
    }
    if (serial_timeout < 0 || serial_timeout > UINT16_MAX)
    {
      return jrk_error_create(
        "The serial_timeout value is out of range.");
    }
    jrk_settings_set_serial_timeout(settings, serial_timeout);
  }
  else if (!strcmp(key, "serial_device_number"))
  {
    int64_t serial_device_number;
    if (jrk_string_to_i64(value, &serial_device_number))
    {
      return jrk_error_create("Invalid serial_device_number value.");
    }
    if (serial_device_number < 0 || serial_device_number > UINT16_MAX)
    {
      return jrk_error_create(
        "The serial_device_number value is out of range.");
    }
    jrk_settings_set_serial_device_number(settings, serial_device_number);
  }
  else if (!strcmp(key, "never_sleep"))
  {
    uint32_t never_sleep;
    if (!jrk_name_to_code(jrk_bool_names, value, &never_sleep))
    {
      return jrk_error_create("Unrecognized never_sleep value.");
    }
    jrk_settings_set_never_sleep(settings, never_sleep);
    jrk_settings_set_never_sleep(settings, never_sleep);
  }
  else if (!strcmp(key, "serial_enable_crc"))
  {
    uint32_t serial_enable_crc;
    if (!jrk_name_to_code(jrk_bool_names, value, &serial_enable_crc))
    {
      return jrk_error_create("Unrecognized serial_enable_crc value.");
    }
    jrk_settings_set_serial_enable_crc(settings, serial_enable_crc);
    jrk_settings_set_serial_enable_crc(settings, serial_enable_crc);
  }
  else if (!strcmp(key, "serial_enable_14bit_device_number"))
  {
    uint32_t serial_enable_14bit_device_number;
    if (!jrk_name_to_code(jrk_bool_names, value, &serial_enable_14bit_device_number))
    {
      return jrk_error_create("Unrecognized serial_enable_14bit_device_number value.");
    }
    jrk_settings_set_serial_enable_14bit_device_number(settings, serial_enable_14bit_device_number);
    jrk_settings_set_serial_enable_14bit_device_number(settings, serial_enable_14bit_device_number);
  }
  else if (!strcmp(key, "serial_disable_compact_protocol"))
  {
    uint32_t serial_disable_compact_protocol;
    if (!jrk_name_to_code(jrk_bool_names, value, &serial_disable_compact_protocol))
    {
      return jrk_error_create("Unrecognized serial_disable_compact_protocol value.");
    }
    jrk_settings_set_serial_disable_compact_protocol(settings, serial_disable_compact_protocol);
    jrk_settings_set_serial_disable_compact_protocol(settings, serial_disable_compact_protocol);
  }
  else if (!strcmp(key, "proportional_multiplier"))
  {
    int64_t proportional_multiplier;
    if (jrk_string_to_i64(value, &proportional_multiplier))
    {
      return jrk_error_create("Invalid proportional_multiplier value.");
    }
    if (proportional_multiplier < 0 || proportional_multiplier > UINT16_MAX)
    {
      return jrk_error_create(
        "The proportional_multiplier value is out of range.");
    }
    jrk_settings_set_proportional_multiplier(settings, proportional_multiplier);
  }
  else if (!strcmp(key, "proportional_exponent"))
  {
    int64_t proportional_exponent;
    if (jrk_string_to_i64(value, &proportional_exponent))
    {
      return jrk_error_create("Invalid proportional_exponent value.");
    }
    if (proportional_exponent < 0 || proportional_exponent > UINT8_MAX)
    {
      return jrk_error_create(
        "The proportional_exponent value is out of range.");
    }
    jrk_settings_set_proportional_exponent(settings, proportional_exponent);
  }
  else if (!strcmp(key, "integral_multiplier"))
  {
    int64_t integral_multiplier;
    if (jrk_string_to_i64(value, &integral_multiplier))
    {
      return jrk_error_create("Invalid integral_multiplier value.");
    }
    if (integral_multiplier < 0 || integral_multiplier > UINT16_MAX)
    {
      return jrk_error_create(
        "The integral_multiplier value is out of range.");
    }
    jrk_settings_set_integral_multiplier(settings, integral_multiplier);
  }
  else if (!strcmp(key, "integral_exponent"))
  {
    int64_t integral_exponent;
    if (jrk_string_to_i64(value, &integral_exponent))
    {
      return jrk_error_create("Invalid integral_exponent value.");
    }
    if (integral_exponent < 0 || integral_exponent > UINT8_MAX)
    {
      return jrk_error_create(
        "The integral_exponent value is out of range.");
    }
    jrk_settings_set_integral_exponent(settings, integral_exponent);
  }
  else if (!strcmp(key, "derivative_multiplier"))
  {
    int64_t derivative_multiplier;
    if (jrk_string_to_i64(value, &derivative_multiplier))
    {
      return jrk_error_create("Invalid derivative_multiplier value.");
    }
    if (derivative_multiplier < 0 || derivative_multiplier > UINT16_MAX)
    {
      return jrk_error_create(
        "The derivative_multiplier value is out of range.");
    }
    jrk_settings_set_derivative_multiplier(settings, derivative_multiplier);
  }
  else if (!strcmp(key, "derivative_exponent"))
  {
    int64_t derivative_exponent;
    if (jrk_string_to_i64(value, &derivative_exponent))
    {
      return jrk_error_create("Invalid derivative_exponent value.");
    }
    if (derivative_exponent < 0 || derivative_exponent > UINT8_MAX)
    {
      return jrk_error_create(
        "The derivative_exponent value is out of range.");
    }
    jrk_settings_set_derivative_exponent(settings, derivative_exponent);
  }
  else if (!strcmp(key, "pid_period"))
  {
    int64_t pid_period;
    if (jrk_string_to_i64(value, &pid_period))
    {
      return jrk_error_create("Invalid pid_period value.");
    }
    if (pid_period < 0 || pid_period > UINT16_MAX)
    {
      return jrk_error_create(
        "The pid_period value is out of range.");
    }
    jrk_settings_set_pid_period(settings, pid_period);
  }
  else if (!strcmp(key, "pid_integral_limit"))
  {
    int64_t pid_integral_limit;
    if (jrk_string_to_i64(value, &pid_integral_limit))
    {
      return jrk_error_create("Invalid pid_integral_limit value.");
    }
    if (pid_integral_limit < 0 || pid_integral_limit > UINT16_MAX)
    {
      return jrk_error_create(
        "The pid_integral_limit value is out of range.");
    }
    jrk_settings_set_pid_integral_limit(settings, pid_integral_limit);
  }
  else if (!strcmp(key, "pid_reset_integral"))
  {
    uint32_t pid_reset_integral;
    if (!jrk_name_to_code(jrk_bool_names, value, &pid_reset_integral))
    {
      return jrk_error_create("Unrecognized pid_reset_integral value.");
    }
    jrk_settings_set_pid_reset_integral(settings, pid_reset_integral);
    jrk_settings_set_pid_reset_integral(settings, pid_reset_integral);
  }
  else if (!strcmp(key, "motor_pwm_frequency"))
  {
    uint32_t motor_pwm_frequency;
    if (!jrk_name_to_code(jrk_motor_pwm_frequency_names_short, value, &motor_pwm_frequency))
    {
      return jrk_error_create("Unrecognized motor_pwm_frequency value.");
    }
    jrk_settings_set_motor_pwm_frequency(settings, motor_pwm_frequency);
  }
  else if (!strcmp(key, "motor_invert"))
  {
    uint32_t motor_invert;
    if (!jrk_name_to_code(jrk_bool_names, value, &motor_invert))
    {
      return jrk_error_create("Unrecognized motor_invert value.");
    }
    jrk_settings_set_motor_invert(settings, motor_invert);
    jrk_settings_set_motor_invert(settings, motor_invert);
  }
  else if (!strcmp(key, "motor_max_duty_cycle_while_feedback_out_of_range"))
  {
    int64_t motor_max_duty_cycle_while_feedback_out_of_range;
    if (jrk_string_to_i64(value, &motor_max_duty_cycle_while_feedback_out_of_range))
    {
      return jrk_error_create("Invalid motor_max_duty_cycle_while_feedback_out_of_range value.");
    }
    if (motor_max_duty_cycle_while_feedback_out_of_range < 0 || motor_max_duty_cycle_while_feedback_out_of_range > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_duty_cycle_while_feedback_out_of_range value is out of range.");
    }
    jrk_settings_set_motor_max_duty_cycle_while_feedback_out_of_range(settings, motor_max_duty_cycle_while_feedback_out_of_range);
  }
  else if (!strcmp(key, "motor_max_acceleration_forward"))
  {
    int64_t motor_max_acceleration_forward;
    if (jrk_string_to_i64(value, &motor_max_acceleration_forward))
    {
      return jrk_error_create("Invalid motor_max_acceleration_forward value.");
    }
    if (motor_max_acceleration_forward < 0 || motor_max_acceleration_forward > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_acceleration_forward value is out of range.");
    }
    jrk_settings_set_motor_max_acceleration_forward(settings, motor_max_acceleration_forward);
  }
  else if (!strcmp(key, "motor_max_acceleration_reverse"))
  {
    int64_t motor_max_acceleration_reverse;
    if (jrk_string_to_i64(value, &motor_max_acceleration_reverse))
    {
      return jrk_error_create("Invalid motor_max_acceleration_reverse value.");
    }
    if (motor_max_acceleration_reverse < 0 || motor_max_acceleration_reverse > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_acceleration_reverse value is out of range.");
    }
    jrk_settings_set_motor_max_acceleration_reverse(settings, motor_max_acceleration_reverse);
  }
  else if (!strcmp(key, "motor_max_deceleration_forward"))
  {
    int64_t motor_max_deceleration_forward;
    if (jrk_string_to_i64(value, &motor_max_deceleration_forward))
    {
      return jrk_error_create("Invalid motor_max_deceleration_forward value.");
    }
    if (motor_max_deceleration_forward < 0 || motor_max_deceleration_forward > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_deceleration_forward value is out of range.");
    }
    jrk_settings_set_motor_max_deceleration_forward(settings, motor_max_deceleration_forward);
  }
  else if (!strcmp(key, "motor_max_deceleration_reverse"))
  {
    int64_t motor_max_deceleration_reverse;
    if (jrk_string_to_i64(value, &motor_max_deceleration_reverse))
    {
      return jrk_error_create("Invalid motor_max_deceleration_reverse value.");
    }
    if (motor_max_deceleration_reverse < 0 || motor_max_deceleration_reverse > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_deceleration_reverse value is out of range.");
    }
    jrk_settings_set_motor_max_deceleration_reverse(settings, motor_max_deceleration_reverse);
  }
  else if (!strcmp(key, "motor_max_duty_cycle_forward"))
  {
    int64_t motor_max_duty_cycle_forward;
    if (jrk_string_to_i64(value, &motor_max_duty_cycle_forward))
    {
      return jrk_error_create("Invalid motor_max_duty_cycle_forward value.");
    }
    if (motor_max_duty_cycle_forward < 0 || motor_max_duty_cycle_forward > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_duty_cycle_forward value is out of range.");
    }
    jrk_settings_set_motor_max_duty_cycle_forward(settings, motor_max_duty_cycle_forward);
  }
  else if (!strcmp(key, "motor_max_duty_cycle_reverse"))
  {
    int64_t motor_max_duty_cycle_reverse;
    if (jrk_string_to_i64(value, &motor_max_duty_cycle_reverse))
    {
      return jrk_error_create("Invalid motor_max_duty_cycle_reverse value.");
    }
    if (motor_max_duty_cycle_reverse < 0 || motor_max_duty_cycle_reverse > UINT16_MAX)
    {
      return jrk_error_create(
        "The motor_max_duty_cycle_reverse value is out of range.");
    }
    jrk_settings_set_motor_max_duty_cycle_reverse(settings, motor_max_duty_cycle_reverse);
  }
  else if (!strcmp(key, "motor_max_current_forward"))
  {
    int64_t motor_max_current_forward;
    if (jrk_string_to_i64(value, &motor_max_current_forward))
    {
      return jrk_error_create("Invalid motor_max_current_forward value.");
    }
    if (motor_max_current_forward < 0 || motor_max_current_forward > UINT8_MAX)
    {
      return jrk_error_create(
        "The motor_max_current_forward value is out of range.");
    }
    jrk_settings_set_motor_max_current_forward(settings, motor_max_current_forward);
  }
  else if (!strcmp(key, "motor_max_current_reverse"))
  {
    int64_t motor_max_current_reverse;
    if (jrk_string_to_i64(value, &motor_max_current_reverse))
    {
      return jrk_error_create("Invalid motor_max_current_reverse value.");
    }
    if (motor_max_current_reverse < 0 || motor_max_current_reverse > UINT8_MAX)
    {
      return jrk_error_create(
        "The motor_max_current_reverse value is out of range.");
    }
    jrk_settings_set_motor_max_current_reverse(settings, motor_max_current_reverse);
  }
  else if (!strcmp(key, "motor_current_calibration_forward"))
  {
    int64_t motor_current_calibration_forward;
    if (jrk_string_to_i64(value, &motor_current_calibration_forward))
    {
      return jrk_error_create("Invalid motor_current_calibration_forward value.");
    }
    if (motor_current_calibration_forward < INT8_MIN || motor_current_calibration_forward > INT8_MAX)
    {
      return jrk_error_create(
        "The motor_current_calibration_forward value is out of range.");
    }
    jrk_settings_set_motor_current_calibration_forward(settings, motor_current_calibration_forward);
  }
  else if (!strcmp(key, "motor_current_calibration_reverse"))
  {
    int64_t motor_current_calibration_reverse;
    if (jrk_string_to_i64(value, &motor_current_calibration_reverse))
    {
      return jrk_error_create("Invalid motor_current_calibration_reverse value.");
    }
    if (motor_current_calibration_reverse < INT8_MIN || motor_current_calibration_reverse > INT8_MAX)
    {
      return jrk_error_create(
        "The motor_current_calibration_reverse value is out of range.");
    }
    jrk_settings_set_motor_current_calibration_reverse(settings, motor_current_calibration_reverse);
  }
  else if (!strcmp(key, "motor_brake_duration_forward"))
  {
    int64_t motor_brake_duration_forward;
    if (jrk_string_to_i64(value, &motor_brake_duration_forward))
    {
      return jrk_error_create("Invalid motor_brake_duration_forward value.");
    }
    if (motor_brake_duration_forward < 0 || motor_brake_duration_forward > UINT8_MAX)
    {
      return jrk_error_create(
        "The motor_brake_duration_forward value is out of range.");
    }
    jrk_settings_set_motor_brake_duration_forward(settings, motor_brake_duration_forward);
  }
  else if (!strcmp(key, "motor_brake_duration_reverse"))
  {
    int64_t motor_brake_duration_reverse;
    if (jrk_string_to_i64(value, &motor_brake_duration_reverse))
    {
      return jrk_error_create("Invalid motor_brake_duration_reverse value.");
    }
    if (motor_brake_duration_reverse < 0 || motor_brake_duration_reverse > UINT8_MAX)
    {
      return jrk_error_create(
        "The motor_brake_duration_reverse value is out of range.");
    }
    jrk_settings_set_motor_brake_duration_reverse(settings, motor_brake_duration_reverse);
  }
  else if (!strcmp(key, "motor_coast_when_off"))
  {
    uint32_t motor_coast_when_off;
    if (!jrk_name_to_code(jrk_bool_names, value, &motor_coast_when_off))
    {
      return jrk_error_create("Unrecognized motor_coast_when_off value.");
    }
    jrk_settings_set_motor_coast_when_off(settings, motor_coast_when_off);
    jrk_settings_set_motor_coast_when_off(settings, motor_coast_when_off);
  }
  else if (!strcmp(key, "error_enable"))
  {
    int64_t error_enable;
    if (jrk_string_to_i64(value, &error_enable))
    {
      return jrk_error_create("Invalid error_enable value.");
    }
    if (error_enable < 0 || error_enable > UINT16_MAX)
    {
      return jrk_error_create(
        "The error_enable value is out of range.");
    }
    jrk_settings_set_error_enable(settings, error_enable);
  }
  else if (!strcmp(key, "error_latch"))
  {
    int64_t error_latch;
    if (jrk_string_to_i64(value, &error_latch))
    {
      return jrk_error_create("Invalid error_latch value.");
    }
    if (error_latch < 0 || error_latch > UINT16_MAX)
    {
      return jrk_error_create(
        "The error_latch value is out of range.");
    }
    jrk_settings_set_error_latch(settings, error_latch);
  }
  else if (!strcmp(key, "vin_calibration"))
  {
    int64_t vin_calibration;
    if (jrk_string_to_i64(value, &vin_calibration))
    {
      return jrk_error_create("Invalid vin_calibration value.");
    }
    if (vin_calibration < INT16_MIN || vin_calibration > INT16_MAX)
    {
      return jrk_error_create(
        "The vin_calibration value is out of range.");
    }
    jrk_settings_set_vin_calibration(settings, vin_calibration);
  }

  // End of auto-generated settings file parsing code.

  else
  {
    return jrk_error_create("Unrecognized key on line %d: \"%s\".", line, key);
  }

  return NULL;
}

// Returns true if the node is a scalar and its value equals the given
// null-terminated string.
static bool scalar_eq(const yaml_node_t * node, const char * v)
{
  if (node == NULL) { return NULL; }
  if (node->type != YAML_SCALAR_NODE) { return false; }
  if (node->data.scalar.length != strlen(v)) { return false; }
  return !memcmp(v, node->data.scalar.value, node->data.scalar.length);
}

// Given a mapping and a key name (as a null-terminated string), gets the node
// corresponding to the value, or NULL if it could not be found.
static yaml_node_t * map_lookup(yaml_document_t * doc,
  yaml_node_t * map, const char * key_name)
{
  if (doc == NULL) { assert(0); return NULL; }
  if (map == NULL) { assert(0); return NULL; }
  if (map->type != YAML_MAPPING_NODE) { return NULL; }

  for (yaml_node_pair_t * pair = map->data.mapping.pairs.start;
       pair < map->data.mapping.pairs.top; pair++)
  {
    yaml_node_t * key = yaml_document_get_node(doc, pair->key);
    if (scalar_eq(key, key_name))
    {
      return yaml_document_get_node(doc, pair->value);
    }
  }
  return NULL;
}

#define MAX_SCALAR_LENGTH 255

// Takes a key-value pair from the YAML file, does some basic checks, creates
// proper null-terminated C strings, and then calls apply_string_pair to do the
// actual logic of parsing strings and applying the settings.
static jrk_error * apply_yaml_pair(jrk_settings * settings,
  const yaml_node_t * key, const yaml_node_t * value)
{
  if (key == NULL)
  {
    return jrk_error_create("Internal YAML processing error: Invalid key index.");
  }
  if (value == NULL)
  {
    return jrk_error_create("Internal YAML processing error: Invalid value index.");
  }

  uint32_t line = key->start_mark.line + 1;

  // Make sure the key is valid and convert it to a C string (we aren't sure
  // that libyaml always provides a null termination byte because scalars can
  // have have null bytes in them).
  if (key->type != YAML_SCALAR_NODE)
  {
    return jrk_error_create(
      "YAML key is not a scalar on line %d.", line);
  }
  if (key->data.scalar.length > MAX_SCALAR_LENGTH)
  {
    return jrk_error_create(
      "YAML key is too long on line %d.", line);
  }
  char key_str[MAX_SCALAR_LENGTH + 1];
  memcpy(key_str, key->data.scalar.value, key->data.scalar.length);
  key_str[key->data.scalar.length] = 0;

  // Make sure the value is valid and convert it to a C string.
  if (value->type != YAML_SCALAR_NODE)
  {
    return jrk_error_create(
      "YAML value is not a scalar on line %d.", line);
  }
  if (value->data.scalar.length > MAX_SCALAR_LENGTH)
  {
    return jrk_error_create(
      "YAML value is too long on line %d.", line);
  }
  char value_str[MAX_SCALAR_LENGTH + 1];
  memcpy(value_str, value->data.scalar.value, value->data.scalar.length);
  value_str[value->data.scalar.length] = 0;

  return apply_string_pair(settings, key_str, value_str, line);
}

// Validates the YAML doc and populates the settings object with the settings
// from the document.
static jrk_error * read_from_yaml_doc(
  yaml_document_t * doc, jrk_settings * settings)
{
  assert(doc != NULL);
  assert(settings != NULL);

  // Get the root node and make sure it is a mapping.
  yaml_node_t * root = yaml_document_get_root_node(doc);
  if (root->type != YAML_MAPPING_NODE)
  {
    return jrk_error_create("YAML root node is not a mapping.");
  }

  // Process the "product" key/value pair first.
  yaml_node_t * product_value = map_lookup(doc, root, "product");
  if (product_value == NULL)
  {
    return jrk_error_create("No product was specified in the settings file.");
  }
  uint32_t product_line = product_value->start_mark.line + 1;
  if (product_value->type != YAML_SCALAR_NODE)
  {
    return jrk_error_create(
      "YAML product value is not a scalar on line %d.", product_line);
  }
  if (product_value->data.scalar.length > MAX_SCALAR_LENGTH)
  {
    return jrk_error_create(
      "YAML product value is too long on line %d.", product_line);
  }
  char product_str[MAX_SCALAR_LENGTH + 1];
  memcpy(product_str, product_value->data.scalar.value,
    product_value->data.scalar.length);
  product_str[product_value->data.scalar.length] = 0;
  jrk_error * error;
  error = apply_product_name(settings, product_str);
  if (error) { return error; }

  // Iterate over the pairs in the YAML mapping and process each one.
  for (yaml_node_pair_t * pair = root->data.mapping.pairs.start;
       pair < root->data.mapping.pairs.top; pair++)
  {
    yaml_node_t * key = yaml_document_get_node(doc, pair->key);
    yaml_node_t * value = yaml_document_get_node(doc, pair->value);
    error = apply_yaml_pair(settings, key, value);
    if (error) { return error; }
  }

  return NULL;
}

jrk_error * jrk_settings_read_from_string(const char * string,
  jrk_settings ** settings)
{
  if (string == NULL)
  {
    return jrk_error_create("Settings input string is null.");
  }

  if (settings == NULL)
  {
    return jrk_error_create("Settings output pointer is null.");
  }

  jrk_error * error = NULL;

  // Allocate a new settings object.
  jrk_settings * new_settings = NULL;
  if (error == NULL)
  {
    error = jrk_settings_create(&new_settings);
  }

  // Make a YAML parser.
  bool parser_initialized = false;
  yaml_parser_t parser;
  if (error == NULL)
  {
    int success = yaml_parser_initialize(&parser);
    if (success)
    {
      parser_initialized = true;
    }
    else
    {
      error = jrk_error_create("Failed to initialize YAML parser.");
    }
  }

  // Construct a YAML document using the parser.
  bool document_initialized = false;
  yaml_document_t doc;
  if (error == NULL)
  {
    yaml_parser_set_input_string(&parser, (const uint8_t *)string, strlen(string));
    int success = yaml_parser_load(&parser, &doc);
    if (success)
    {
      document_initialized = true;
    }
    else
    {
      error = jrk_error_create("Failed to load document: %s at line %u.",
        parser.problem, (unsigned int)parser.problem_mark.line + 1);
    }
  }

  // Proces the YAML document.
  if (error == NULL)
  {
    error = read_from_yaml_doc(&doc, new_settings);
  }

  // Success!  Pass the settings to the caller.
  if (error == NULL)
  {
    *settings = new_settings;
    new_settings = NULL;
  }

  if (document_initialized)
  {
    yaml_document_delete(&doc);
  }

  if (parser_initialized)
  {
    yaml_parser_delete(&parser);
  }

  jrk_settings_free(new_settings);

  if (error != NULL)
  {
    error = jrk_error_add(error, "There was an error reading the settings file.");
  }

  return error;
}