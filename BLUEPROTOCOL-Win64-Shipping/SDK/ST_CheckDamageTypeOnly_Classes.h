﻿#pragma once

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
	 * BlueprintGeneratedClass ST_CheckDamageTypeOnly.ST_CheckDamageTypeOnly_C
	 * Size -> 0x0001 (FullSize[0x0051] - InheritedSize[0x0050])
	 */
	class UST_CheckDamageTypeOnly_C : public UST_TransitionBase_C
	{
	public:
		E_DamageReaction                                           Reaction;                                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif