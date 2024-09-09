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
	 * BlueprintGeneratedClass BP_ScriptTheaterActor.BP_ScriptTheaterActor_C
	 * Size -> 0x000F (FullSize[0x0C10] - InheritedSize[0x0C01])
	 */
	class ABP_ScriptTheaterActor_C : public ABP_ScriptActor_C
	{
	public:
		unsigned char                                              UnknownData_RLXQ[0x7];                                   // 0x0C01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C08(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void RequestPlayDemo_Theater(const class FName& InDemoName);
		void OnDemoFinish_Theater();
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_ScriptTheaterActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
