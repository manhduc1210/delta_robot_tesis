// Generated by gencpp from file simu_visual/matriz_path_ls.msg
// DO NOT EDIT!


#ifndef SIMU_VISUAL_MESSAGE_MATRIZ_PATH_LS_H
#define SIMU_VISUAL_MESSAGE_MATRIZ_PATH_LS_H


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
struct matriz_path_ls_
{
  typedef matriz_path_ls_<ContainerAllocator> Type;

  matriz_path_ls_()
    : permiso(false)
    , id_call(0)
    , x()
    , y()
    , z()
    , th1()
    , th2()
    , th3()
    , tiempo()  {
    }
  matriz_path_ls_(const ContainerAllocator& _alloc)
    : permiso(false)
    , id_call(0)
    , x(_alloc)
    , y(_alloc)
    , z(_alloc)
    , th1(_alloc)
    , th2(_alloc)
    , th3(_alloc)
    , tiempo(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _permiso_type;
  _permiso_type permiso;

   typedef int64_t _id_call_type;
  _id_call_type id_call;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _x_type;
  _x_type x;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _y_type;
  _y_type y;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _z_type;
  _z_type z;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _th1_type;
  _th1_type th1;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _th2_type;
  _th2_type th2;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _th3_type;
  _th3_type th3;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _tiempo_type;
  _tiempo_type tiempo;





  typedef boost::shared_ptr< ::simu_visual::matriz_path_ls_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simu_visual::matriz_path_ls_<ContainerAllocator> const> ConstPtr;

}; // struct matriz_path_ls_

typedef ::simu_visual::matriz_path_ls_<std::allocator<void> > matriz_path_ls;

typedef boost::shared_ptr< ::simu_visual::matriz_path_ls > matriz_path_lsPtr;
typedef boost::shared_ptr< ::simu_visual::matriz_path_ls const> matriz_path_lsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simu_visual::matriz_path_ls_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simu_visual::matriz_path_ls_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::simu_visual::matriz_path_ls_<ContainerAllocator1> & lhs, const ::simu_visual::matriz_path_ls_<ContainerAllocator2> & rhs)
{
  return lhs.permiso == rhs.permiso &&
    lhs.id_call == rhs.id_call &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.th1 == rhs.th1 &&
    lhs.th2 == rhs.th2 &&
    lhs.th3 == rhs.th3 &&
    lhs.tiempo == rhs.tiempo;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::simu_visual::matriz_path_ls_<ContainerAllocator1> & lhs, const ::simu_visual::matriz_path_ls_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace simu_visual

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simu_visual::matriz_path_ls_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simu_visual::matriz_path_ls_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simu_visual::matriz_path_ls_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb8abae6b50409fef1dc6dbabd6fe786";
  }

  static const char* value(const ::simu_visual::matriz_path_ls_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb8abae6b50409feULL;
  static const uint64_t static_value2 = 0xf1dc6dbabd6fe786ULL;
};

template<class ContainerAllocator>
struct DataType< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simu_visual/matriz_path_ls";
  }

  static const char* value(const ::simu_visual::matriz_path_ls_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool permiso\n"
"int64 id_call\n"
"float32[] x\n"
"float32[] y\n"
"float32[] z\n"
"float32[] th1\n"
"float32[] th2\n"
"float32[] th3\n"
"float32[] tiempo\n"
;
  }

  static const char* value(const ::simu_visual::matriz_path_ls_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.permiso);
      stream.next(m.id_call);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.th1);
      stream.next(m.th2);
      stream.next(m.th3);
      stream.next(m.tiempo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct matriz_path_ls_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simu_visual::matriz_path_ls_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simu_visual::matriz_path_ls_<ContainerAllocator>& v)
  {
    s << indent << "permiso: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.permiso);
    s << indent << "id_call: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id_call);
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "z[]" << std::endl;
    for (size_t i = 0; i < v.z.size(); ++i)
    {
      s << indent << "  z[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.z[i]);
    }
    s << indent << "th1[]" << std::endl;
    for (size_t i = 0; i < v.th1.size(); ++i)
    {
      s << indent << "  th1[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.th1[i]);
    }
    s << indent << "th2[]" << std::endl;
    for (size_t i = 0; i < v.th2.size(); ++i)
    {
      s << indent << "  th2[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.th2[i]);
    }
    s << indent << "th3[]" << std::endl;
    for (size_t i = 0; i < v.th3.size(); ++i)
    {
      s << indent << "  th3[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.th3[i]);
    }
    s << indent << "tiempo[]" << std::endl;
    for (size_t i = 0; i < v.tiempo.size(); ++i)
    {
      s << indent << "  tiempo[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.tiempo[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMU_VISUAL_MESSAGE_MATRIZ_PATH_LS_H
