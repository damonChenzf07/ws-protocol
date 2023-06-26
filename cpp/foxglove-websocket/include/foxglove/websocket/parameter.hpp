#pragma once

//#include <any>
#include <stdint.h>
#include <string>
#include <vector>
#include <memory>


namespace foxglove {

enum class ParameterSubscriptionOperation {
  SUBSCRIBE,
  UNSUBSCRIBE,
};

enum class ParameterType {
  PARAMETER_NOT_SET,
  PARAMETER_BOOL,
  PARAMETER_INTEGER,
  PARAMETER_DOUBLE,
  PARAMETER_STRING,
  PARAMETER_BOOL_ARRAY,
  PARAMETER_INTEGER_ARRAY,
  PARAMETER_DOUBLE_ARRAY,
  PARAMETER_STRING_ARRAY,
};

class Parameter {
public:
  Parameter();
  Parameter(const std::string& name);
  Parameter(const std::string& name, bool value);
  Parameter(const std::string& name, int value);
  Parameter(const std::string& name, int64_t value);
  Parameter(const std::string& name, double value);
  Parameter(const std::string& name, std::string value);
  Parameter(const std::string& name, const char* value);
  Parameter(const std::string& name, const std::vector<bool>& value);
  Parameter(const std::string& name, const std::vector<int>& value);
  Parameter(const std::string& name, const std::vector<int64_t>& value);
  Parameter(const std::string& name, const std::vector<double>& value);
  Parameter(const std::string& name, const std::vector<std::string>& value);

  inline const std::string& getName() const {
    return _name;
  }

  inline ParameterType getType() const {
    return _type;
  }

  template <typename T>
  inline const T& getValue() const {
    switch (_type)
    {
    case ParameterType::PARAMETER_BOOL:
      return (T&)_b_value;
      break;
    case ParameterType::PARAMETER_INTEGER:
      return (T&)_int_value;
      break;
    case ParameterType::PARAMETER_DOUBLE:
      return (T&)_d_value;
      break;
    case ParameterType::PARAMETER_STRING:
      return (T&)_str_value;
      break;

    case ParameterType::PARAMETER_BOOL_ARRAY:
      return (T&)_vb_value;
      break;
    case ParameterType::PARAMETER_INTEGER_ARRAY:
      return (T&)_vint_value;
      break;
    case ParameterType::PARAMETER_DOUBLE_ARRAY:
      return (T&)_vd_value;
      break;
    case ParameterType::PARAMETER_STRING_ARRAY:
      return (T&)_vstr_value;
      break;

    default:
      break;
    }
    //return (T)_b_value;
  }

private:
  inline void _setValue(bool& value)  {
    _b_value = value;
  }

  inline void _setValue(int64_t& value)  {
    _int_value = value;
  }

  inline void _setValue(double& value)  {
    _d_value = value;
  }

  inline void _setValue(std::string& value)  {
    _str_value = value;
  }

  inline void _setValue(std::vector<bool> value)  {
    _vb_value = value;
  }

  inline void _setValue(std::vector<int> value)  {
    for(auto it : value) {
      _vint_value.push_back(it);
    }
  }

  inline void _setValue(std::vector<int64_t> value)  {
    _vint_value = value;
  }

  inline void _setValue(std::vector<double> value)  {
    _vd_value = value;
  }

  inline void _setValue(std::vector<std::string> value)  {
    _vstr_value = value;
  }

  std::string _name;
  ParameterType _type;
  std::shared_ptr<void> _value;

  bool _b_value;
  int64_t _int_value;
  double _d_value;
  std::string _str_value;
  std::vector<bool> _vb_value;
  std::vector<int64_t> _vint_value;
  std::vector<double> _vd_value;
  std::vector<std::string> _vstr_value;
};

}  // namespace foxglove
