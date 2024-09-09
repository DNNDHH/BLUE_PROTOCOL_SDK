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
	 * Function HateAlertIcon.HateAlertIcon_C.RequestSetIconColorName
	 */
	struct UHateAlertIcon_C_RequestSetIconColorName_Params
	{
	public:
		class FString                                              ColorName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.SetAnimationSpeed
	 */
	struct UHateAlertIcon_C_SetAnimationSpeed_Params
	{
	public:
		float                                                      AnimationSpeed;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.PlayAnimBlink
	 */
	struct UHateAlertIcon_C_PlayAnimBlink_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.PlayAnimOut
	 */
	struct UHateAlertIcon_C_PlayAnimOut_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.PlayAnimIn
	 */
	struct UHateAlertIcon_C_PlayAnimIn_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.SetIconColorName
	 */
	struct UHateAlertIcon_C_SetIconColorName_Params
	{
	public:
		class FString                                              ColorName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.SetIconColor
	 */
	struct UHateAlertIcon_C_SetIconColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.Hide
	 */
	struct UHateAlertIcon_C_Hide_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.Show
	 */
	struct UHateAlertIcon_C_Show_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.Construct
	 */
	struct UHateAlertIcon_C_Construct_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.OnAnimationFinished
	 */
	struct UHateAlertIcon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.PreConstruct
	 */
	struct UHateAlertIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.RequestShow
	 */
	struct UHateAlertIcon_C_RequestShow_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.RequestHide
	 */
	struct UHateAlertIcon_C_RequestHide_Params
	{	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.RequestSetOwnerCharacter
	 */
	struct UHateAlertIcon_C_RequestSetOwnerCharacter_Params
	{
	public:
		class ASBCharacter*                                        OwnerCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.RequestSetAnimationSpeed
	 */
	struct UHateAlertIcon_C_RequestSetAnimationSpeed_Params
	{
	public:
		float                                                      AnimationSpeed;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HateAlertIcon.HateAlertIcon_C.ExecuteUbergraph_HateAlertIcon
	 */
	struct UHateAlertIcon_C_ExecuteUbergraph_HateAlertIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2YP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
