/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.FileBackupHelperBase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }


#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class FileBackupHelperBase;
	class FileBackupHelperBase
		: public object<FileBackupHelperBase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit FileBackupHelperBase(jobject jobj)
		: object<FileBackupHelperBase>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void writeNewStateDescription(local_ref< android::os::ParcelFileDescriptor >  const&);
	}; //class FileBackupHelperBase

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_IMPL

namespace j2cpp {



android::app::backup::FileBackupHelperBase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



void android::app::backup::FileBackupHelperBase::writeNewStateDescription(local_ref< android::os::ParcelFileDescriptor > const &a0)
{
	return call_method<
		android::app::backup::FileBackupHelperBase::J2CPP_CLASS_NAME,
		android::app::backup::FileBackupHelperBase::J2CPP_METHOD_NAME(2),
		android::app::backup::FileBackupHelperBase::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::backup::FileBackupHelperBase,"android/app/backup/FileBackupHelperBase")
J2CPP_DEFINE_METHOD(android::app::backup::FileBackupHelperBase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::backup::FileBackupHelperBase,1,"finalize","()V")
J2CPP_DEFINE_METHOD(android::app::backup::FileBackupHelperBase,2,"writeNewStateDescription","(Landroid/os/ParcelFileDescriptor;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_FILEBACKUPHELPERBASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION