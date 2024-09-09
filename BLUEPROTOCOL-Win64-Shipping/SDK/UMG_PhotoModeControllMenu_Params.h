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
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.MoveStampListItem
	 */
	struct UUMG_PhotoModeControllMenu_C_MoveStampListItem_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Offset;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QXYP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabSkill_ToolTipWidget_1
	 */
	struct UUMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabGesture_ToolTipWidget_1
	 */
	struct UUMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabLookAt_ToolTipWidget_1
	 */
	struct UUMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabZoom_ToolTipWidget_1
	 */
	struct UUMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabRotation_ToolTipWidget_1
	 */
	struct UUMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Create Tool Tip
	 */
	struct UUMG_PhotoModeControllMenu_C_CreateToolTip_Params
	{
	public:
		class FName                                                TextId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             TabButtonToolTip;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsGamepadMode
	 */
	struct UUMG_PhotoModeControllMenu_C_IsGamepadMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRootVisible
	 */
	struct UUMG_PhotoModeControllMenu_C_SetRootVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Instantly;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitKeyGuidText
	 */
	struct UUMG_PhotoModeControllMenu_C_InitKeyGuidText_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsKeyboardMode
	 */
	struct UUMG_PhotoModeControllMenu_C_IsKeyboardMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VY0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.On_DropHitBG_MouseButtonDown
	 */
	struct UUMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDrop
	 */
	struct UUMG_PhotoModeControllMenu_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDragOver
	 */
	struct UUMG_PhotoModeControllMenu_C_OnDragOver_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnMouseButtonDown
	 */
	struct UUMG_PhotoModeControllMenu_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiStampGraph
	 */
	struct UUMG_PhotoModeControllMenu_C_ConstructUiStampGraph_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedDeleteStamp
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedDeleteStamp_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateStampControlList
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateStampControlList_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitStampControlListItem
	 */
	struct UUMG_PhotoModeControllMenu_C_InitStampControlListItem_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampUp
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedStampUp_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampDown
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedStampDown_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStamp
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedStamp_Params
	{
	public:
		class UWBP_PhotoModeStamp_C*                               Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampSelect
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedStampSelect_Params
	{
	public:
		class UWBP_PhotoModeStampControlListItem_C*                Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlData
	 */
	struct UUMG_PhotoModeControllMenu_C_SetSelectedStampControlData_Params
	{
	public:
		class UBP_PhotoModeStampControlData_C*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetStampReverse
	 */
	struct UUMG_PhotoModeControllMenu_C_SetStampReverse_Params
	{
	public:
		bool                                                       bReverse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlDataByStamp
	 */
	struct UUMG_PhotoModeControllMenu_C_SetSelectedStampControlDataByStamp_Params
	{
	public:
		class UObject*                                             Stamp;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetDraggingStamp
	 */
	struct UUMG_PhotoModeControllMenu_C_SetDraggingStamp_Params
	{
	public:
		class UWBP_PhotoModeStamp_C*                               DraggingStamp;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewStamp;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedTemplate
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedTemplate_Params
	{
	public:
		class UTemplateTextItems_C*                                InSelectedItem;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature_Params
	{
	public:
		struct FSBStampCategoryMasterData                          StampCategoryMasterData;                                 // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampListItem
	 */
	struct UUMG_PhotoModeControllMenu_C_OnClickedStampListItem_Params
	{
	public:
		int32_t                                                    RetStampID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BANA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UChatStampButtonItem_C*                              InSelectItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiFrameGraph
	 */
	struct UUMG_PhotoModeControllMenu_C_ConstructUiFrameGraph_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitValuesInFrameGraph
	 */
	struct UUMG_PhotoModeControllMenu_C_InitValuesInFrameGraph_Params
	{
	public:
		class ABP_SBPhotoModeController_C*                         PMC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteColor
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateVignetteColor_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteEnable
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateVignetteEnable_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActiveCameraControlViewWidget
	 */
	struct UUMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params
	{
	public:
		class UCharaCreateClassSkillMenuItem_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetLookAtPlayer
	 */
	struct UUMG_PhotoModeControllMenu_C_SetLookAtPlayer_Params
	{
	public:
		bool                                                       bLookAtPlayer;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFocalDistance
	 */
	struct UUMG_PhotoModeControllMenu_C_SetFocalDistance_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFOV
	 */
	struct UUMG_PhotoModeControllMenu_C_SetFOV_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRotation
	 */
	struct UUMG_PhotoModeControllMenu_C_SetRotation_Params
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActivePlayerControlViewWidget
	 */
	struct UUMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature_Params
	{
	public:
		class FName                                                EmotionId;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature_Params
	{
	public:
		ESBFacialType                                              FacialType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDofUi
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateDofUi_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature_Params
	{
	public:
		ESBLipSyncType                                             LipSyncType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseEyes;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetPhotoModeContoller
	 */
	struct UUMG_PhotoModeControllMenu_C_SetPhotoModeContoller_Params
	{
	public:
		class ABP_SBPhotoModeController_C*                         PMC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.PreConstruct
	 */
	struct UUMG_PhotoModeControllMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetControlMode
	 */
	struct UUMG_PhotoModeControllMenu_C_SetControlMode_Params
	{
	public:
		bool                                                       bPlayerControlMode;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Construct
	 */
	struct UUMG_PhotoModeControllMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetTalkMode
	 */
	struct UUMG_PhotoModeControllMenu_C_SetTalkMode_Params
	{
	public:
		bool                                                       bTalkMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Destruct
	 */
	struct UUMG_PhotoModeControllMenu_C_Destruct_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnChangeVisibleSetting
	 */
	struct UUMG_PhotoModeControllMenu_C_OnChangeVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDesign
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateDesign_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ToggleCameraControlView
	 */
	struct UUMG_PhotoModeControllMenu_C_ToggleCameraControlView_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.TogglePlayerControlView
	 */
	struct UUMG_PhotoModeControllMenu_C_TogglePlayerControlView_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.RefreshPlayerControlData
	 */
	struct UUMG_PhotoModeControllMenu_C_RefreshPlayerControlData_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateSkillList
	 */
	struct UUMG_PhotoModeControllMenu_C_UpdateSkillList_Params
	{	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Event_OnSavedUploadImage
	 */
	struct UUMG_PhotoModeControllMenu_C_Event_OnSavedUploadImage_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnPrepareScreenshot
	 */
	struct UUMG_PhotoModeControllMenu_C_OnPrepareScreenshot_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnFinishScreenshot
	 */
	struct UUMG_PhotoModeControllMenu_C_OnFinishScreenshot_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Tick
	 */
	struct UUMG_PhotoModeControllMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ExecuteUbergraph_UMG_PhotoModeControllMenu
	 */
	struct UUMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
