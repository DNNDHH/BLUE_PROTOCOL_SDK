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
	 * BlueprintGeneratedClass US_SetPartyStrategy.US_SetPartyStrategy_C
	 * Size -> 0x0009 (FullSize[0x0041] - InheritedSize[0x0038])
	 */
	class UUS_SetPartyStrategy_C : public USBUtilityService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient
		EAIPartyStrategy                                           Stragety;                                                // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveOnActivate();
		void ReceiveOnDeactivate();
		void ExecuteUbergraph_US_SetPartyStrategy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
