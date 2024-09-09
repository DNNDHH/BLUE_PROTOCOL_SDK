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
	 * Function HitIndicatorMarker.HitIndicatorMarker_C.UpdateDirection
	 */
	struct UHitIndicatorMarker_C_UpdateDirection_Params
	{	};

	/**
	 * Function HitIndicatorMarker.HitIndicatorMarker_C.Construct
	 */
	struct UHitIndicatorMarker_C_Construct_Params
	{	};

	/**
	 * Function HitIndicatorMarker.HitIndicatorMarker_C.Tick
	 */
	struct UHitIndicatorMarker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HitIndicatorMarker.HitIndicatorMarker_C.OnAnimationFinished
	 */
	struct UHitIndicatorMarker_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HitIndicatorMarker.HitIndicatorMarker_C.ExecuteUbergraph_HitIndicatorMarker
	 */
	struct UHitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
