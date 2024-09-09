#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_EF_Library.BP_EF_Library_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_EF_Library_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsShouldExecOnClientOnly(class UObject* __WorldContext, bool* IsExec);
		void IsShouldExecOnServerOnly(class UObject* __WorldContext, bool* IsExec);
		void IsIntervalExec(float* RefTotalDeltaTime, float DeltaTime, float ExecIntervalTime, class UObject* __WorldContext, bool* IsExec);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
