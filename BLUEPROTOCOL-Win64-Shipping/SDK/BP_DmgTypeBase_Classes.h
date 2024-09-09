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
	 * BlueprintGeneratedClass BP_DmgTypeBase.BP_DmgTypeBase_C
	 * Size -> 0x0001 (FullSize[0x0059] - InheritedSize[0x0058])
	 */
	class UBP_DmgTypeBase_C : public USBDamageType
	{
	public:
		E_DamagePower                                              DamagePower;                                             // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
