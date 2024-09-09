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
	 * BlueprintGeneratedClass TS_Order_Buff.TS_Order_Buff_C
	 * Size -> 0x0008 (FullSize[0x0188] - InheritedSize[0x0180])
	 */
	class UTS_Order_Buff_C : public USBAITacticalSkill_HTNBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0180(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceivePrepareForPlanning();
		void ExecuteUbergraph_TS_Order_Buff(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
