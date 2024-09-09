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
	 * Function PlaceGuideContent.PlaceGuideContent_C.Construct
	 */
	struct UPlaceGuideContent_C_Construct_Params
	{	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.Show_ByText
	 */
	struct UPlaceGuideContent_C_Show_ByText_Params
	{
	public:
		class FText                                                InPlaceName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InSubName;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bInAutoClose;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.OnAnimationFinished
	 */
	struct UPlaceGuideContent_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.Hide
	 */
	struct UPlaceGuideContent_C_Hide_Params
	{	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.OnChangeUIVisibleSetting
	 */
	struct UPlaceGuideContent_C_OnChangeUIVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.Destruct
	 */
	struct UPlaceGuideContent_C_Destruct_Params
	{	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.ExecuteUbergraph_PlaceGuideContent
	 */
	struct UPlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlaceGuideContent.PlaceGuideContent_C.OnPlayEnd__DelegateSignature
	 */
	struct UPlaceGuideContent_C_OnPlayEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
