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
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ChangeTooltipText
	 */
	struct UMapWidget_WarpPointIcon_C_ChangeTooltipText_Params
	{
	public:
		class FString                                              InToolTipText;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetDungeonMode
	 */
	struct UMapWidget_WarpPointIcon_C_SetDungeonMode_Params
	{
	public:
		bool                                                       InDungeonMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPointEx
	 */
	struct UMapWidget_WarpPointIcon_C_SetWarpPointEx_Params
	{
	public:
		struct FSBMasterWarpPoint                                  InWarpPointData;                                         // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsCity;                                                  // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C6OS[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImageEx
	 */
	struct UMapWidget_WarpPointIcon_C_SetIconImageEx_Params
	{
	public:
		bool                                                       IsLocalWarpIcon;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHovered;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetGrayOut
	 */
	struct UMapWidget_WarpPointIcon_C_SetGrayOut_Params
	{
	public:
		bool                                                       IsGrayOut;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetHoveredSoundId
	 */
	struct UMapWidget_WarpPointIcon_C_SetHoveredSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetPressedSoundId
	 */
	struct UMapWidget_WarpPointIcon_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconNormalTintColor
	 */
	struct UMapWidget_WarpPointIcon_C_SetIconNormalTintColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.GetToolTipWidget_1
	 */
	struct UMapWidget_WarpPointIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetButtonPressEnable
	 */
	struct UMapWidget_WarpPointIcon_C_SetButtonPressEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetIconImage
	 */
	struct UMapWidget_WarpPointIcon_C_SetIconImage_Params
	{
	public:
		bool                                                       IsLocalWarpIcon;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsHovered;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetActive
	 */
	struct UMapWidget_WarpPointIcon_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.SetWarpPoint
	 */
	struct UMapWidget_WarpPointIcon_C_SetWarpPoint_Params
	{
	public:
		struct FSBMasterWarpPoint                                  InWarpPointData;                                         // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsCity;                                                  // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S08H[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_213_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_WarpPointIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_239_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.ExecuteUbergraph_MapWidget_WarpPointIcon
	 */
	struct UMapWidget_WarpPointIcon_C_ExecuteUbergraph_MapWidget_WarpPointIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_WarpPointIcon.MapWidget_WarpPointIcon_C.OnPressed__DelegateSignature
	 */
	struct UMapWidget_WarpPointIcon_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UMapWidget_WarpPointIcon_C*                          InWarpPointIcon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
