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
	 * BlueprintGeneratedClass ST_NPCLocomotion.ST_NPCLocomotion_C
	 * Size -> 0x0004 (FullSize[0x0054] - InheritedSize[0x0050])
	 */
	class UST_NPCLocomotion_C : public UASTransition_BlueprintBase
	{
	public:
		float                                                      VelocityLength;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
