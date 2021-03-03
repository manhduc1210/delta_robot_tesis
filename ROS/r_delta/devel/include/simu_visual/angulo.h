// Generated by gencpp from file simu_visual/angulo.msg
// DO NOT EDIT!


#ifndef SIMU_VISUAL_MESSAGE_ANGULO_H
#define SIMU_VISUAL_MESSAGE_ANGULO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simu_visual
{
template <class ContainerAllocator>
struct angulo_
{
  typedef angulo_<ContainerAllocator> Type;

  angulo_()
    : theta1(0.0)
    , theta2(0.0)
    , theta3(0.0)  {
    }
  angulo_(const ContainerAllocator& _alloc)
    : theta1(0.0)
    , theta2(0.0)
    , theta3(0.0)  {
  (void)_alloc;
    }



   typedef float _theta1_type;
  _theta1_type theta1;

   typedef float _theta2_type;
  _theta2_type theta2;

   typedef float _theta3_type;
  _theta3_type theta3;





  typedef boost::shared_ptr< ::simu_visual::angulo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simu_visual::angulo_<ContainerAllocator> const> ConstPtr;

}; // struct angulo_

typedef ::simu_visual::angulo_<std::allocator<void> > angulo;

typedef boost::shared_ptr< ::simu_visual::angulo > anguloPtr;
typedef boost::shared_ptr< ::simu_visual::angulo const> anguloConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simu_visual::angulo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simu_visual::angulo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::simu_visual::angulo_<ContainerAllocator1> & lhs, const ::simu_visual::angulo_<ContainerAllocator2> & rhs)
{
  return lhs.theta1 == rhs.theta1 &&
    lhs.theta2 == rhs.theta2 &&
    lhs.theta3 == rhs.theta3;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::simu_visual::angulo_<ContainerAllocator1> & lhs, const ::simu_visual::angulo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace simu_visual

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::simu_visual::angulo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simu_visual::angulo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simu_visual::angulo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simu_visual::angulo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simu_visual::angulo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simu_visual::angulo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simu_visual::angulo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f6b72178218fbe6abc22ec5b1c7a40d8";
  }

  static const char* value(const ::simu_visual::angulo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf6b72178218fbe6aULL;
  static const uint64_t static_value2 = 0xbc22ec5b1c7a40d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::simu_visual::angulo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simu_visual/angulo";
  }

  static const char* value(const ::simu_visual::angulo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simu_visual::angulo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 theta1\n"
"float32 theta2\n"
"float32 theta3\n"
;
  }

  static const char* value(const ::simu_visual::angulo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simu_visual::angulo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.theta1);
      stream.next(m.theta2);
      stream.next(m.theta3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct angulo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simu_visual::angulo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simu_visual::angulo_<ContainerAllocator>& v)
  {
    s << indent << "theta1: ";
    Printer<float>::stream(s, indent + "  ", v.theta1);
    s << indent << "theta2: ";
    Printer<float>::stream(s, indent + "  ", v.theta2);
    s << indent << "theta3: ";
    Printer<float>::stream(s, indent + "  ", v.theta3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMU_VISUAL_MESSAGE_ANGULO_H
