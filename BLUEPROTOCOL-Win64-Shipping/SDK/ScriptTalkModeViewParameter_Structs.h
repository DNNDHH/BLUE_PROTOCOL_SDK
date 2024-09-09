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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ScriptTalkModeViewParameter.ScriptTalkModeViewParameter
	 * Size -> 0x0024
	 */
	struct FScriptTalkModeViewParameter
	{
	public:
		struct FVector                                             PlayerLocation_6_ADF4095C423217BD8D4F10B8FC3C7327;       // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CameraLocation_7_235175B44E7E066F1227448D6848D92A;       // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ViewTargetLocation_8_9DF3962246DB25060A0B148F513FD2DE;   // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
