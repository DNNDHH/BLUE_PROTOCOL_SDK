/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.MoveStampListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::MoveStampListItem(class UWBP_PhotoModeStampControlListItem_C* Sender, int32_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.MoveStampListItem");
		
		UUMG_PhotoModeControllMenu_C_MoveStampListItem_Params params {};
		params.Sender = Sender;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabSkill_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabSkill_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabSkill_ToolTipWidget_1");
		
		UUMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabGesture_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabGesture_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabGesture_ToolTipWidget_1");
		
		UUMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabLookAt_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabLookAt_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabLookAt_ToolTipWidget_1");
		
		UUMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabZoom_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabZoom_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabZoom_ToolTipWidget_1");
		
		UUMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabRotation_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabRotation_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabRotation_ToolTipWidget_1");
		
		UUMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Create Tool Tip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     TabButtonToolTip                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::CreateToolTip(const class FName& TextId, class UWidget** TabButtonToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Create Tool Tip");
		
		UUMG_PhotoModeControllMenu_C_CreateToolTip_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TabButtonToolTip != nullptr)
			*TabButtonToolTip = params.TabButtonToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsGamepadMode
	 * 		Flags  -> ()
	 */
	bool UUMG_PhotoModeControllMenu_C::IsGamepadMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsGamepadMode");
		
		UUMG_PhotoModeControllMenu_C_IsGamepadMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRootVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Instantly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetRootVisible(bool bVisible, bool Instantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRootVisible");
		
		UUMG_PhotoModeControllMenu_C_SetRootVisible_Params params {};
		params.bVisible = bVisible;
		params.Instantly = Instantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitKeyGuidText
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::InitKeyGuidText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitKeyGuidText");
		
		UUMG_PhotoModeControllMenu_C_InitKeyGuidText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsKeyboardMode
	 * 		Flags  -> ()
	 */
	bool UUMG_PhotoModeControllMenu_C::IsKeyboardMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsKeyboardMode");
		
		UUMG_PhotoModeControllMenu_C_IsKeyboardMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.On_DropHitBG_MouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUMG_PhotoModeControllMenu_C::On_DropHitBG_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.On_DropHitBG_MouseButtonDown");
		
		UUMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUMG_PhotoModeControllMenu_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDrop");
		
		UUMG_PhotoModeControllMenu_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDragOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUMG_PhotoModeControllMenu_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDragOver");
		
		UUMG_PhotoModeControllMenu_C_OnDragOver_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUMG_PhotoModeControllMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnMouseButtonDown");
		
		UUMG_PhotoModeControllMenu_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_Stamp_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButtonTransparent_Stamp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_StampText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiStampGraph
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::ConstructUiStampGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiStampGraph");
		
		UUMG_PhotoModeControllMenu_C_ConstructUiStampGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedDeleteStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedDeleteStamp(class UWBP_PhotoModeStampControlListItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedDeleteStamp");
		
		UUMG_PhotoModeControllMenu_C_OnClickedDeleteStamp_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateStampControlList
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateStampControlList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateStampControlList");
		
		UUMG_PhotoModeControllMenu_C_UpdateStampControlList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitStampControlListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::InitStampControlListItem(class UWBP_PhotoModeStampControlListItem_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitStampControlListItem");
		
		UUMG_PhotoModeControllMenu_C_InitStampControlListItem_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedStampUp(class UWBP_PhotoModeStampControlListItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampUp");
		
		UUMG_PhotoModeControllMenu_C_OnClickedStampUp_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedStampDown(class UWBP_PhotoModeStampControlListItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampDown");
		
		UUMG_PhotoModeControllMenu_C_OnClickedStampDown_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStamp_C*                       Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedStamp(class UWBP_PhotoModeStamp_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStamp");
		
		UUMG_PhotoModeControllMenu_C_OnClickedStamp_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedStampSelect(class UWBP_PhotoModeStampControlListItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampSelect");
		
		UUMG_PhotoModeControllMenu_C_OnClickedStampSelect_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_PhotoModeStampControlData_C*             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetSelectedStampControlData(class UBP_PhotoModeStampControlData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlData");
		
		UUMG_PhotoModeControllMenu_C_SetSelectedStampControlData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Size_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Angle_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Stamp_Alpha_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReverse_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBSelectableButton_StampReset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetStampReverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReverse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetStampReverse(bool bReverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetStampReverse");
		
		UUMG_PhotoModeControllMenu_C_SetStampReverse_Params params {};
		params.bReverse = bReverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlDataByStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Stamp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetSelectedStampControlDataByStamp(class UObject* Stamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetSelectedStampControlDataByStamp");
		
		UUMG_PhotoModeControllMenu_C_SetSelectedStampControlDataByStamp_Params params {};
		params.Stamp = Stamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetDraggingStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStamp_C*                       DraggingStamp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewStamp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetDraggingStamp(class UWBP_PhotoModeStamp_C* DraggingStamp, bool bNewStamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetDraggingStamp");
		
		UUMG_PhotoModeControllMenu_C_SetDraggingStamp_Params params {};
		params.DraggingStamp = DraggingStamp;
		params.bNewStamp = bNewStamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTemplateTextItems_C*                        InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedTemplate(class UTemplateTextItems_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedTemplate");
		
		UUMG_PhotoModeControllMenu_C_OnClickedTemplate_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_StampCategoryMenu_K2Node_ComponentBoundEvent_7_OnUpdateStamp__DelegateSignature_Params params {};
		params.StampCategoryMasterData = StampCategoryMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetStampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChatStampButtonItem_C*                      InSelectItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnClickedStampListItem(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnClickedStampListItem");
		
		UUMG_PhotoModeControllMenu_C_OnClickedStampListItem_Params params {};
		params.RetStampID = RetStampID;
		params.InSelectItem = InSelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_H_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_S_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_V_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Alpha_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Blur_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_Squareness_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosX_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_PosY_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_Vignette_SizeX_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiFrameGraph
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::ConstructUiFrameGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ConstructUiFrameGraph");
		
		UUMG_PhotoModeControllMenu_C_ConstructUiFrameGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_ResetVignette_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitValuesInFrameGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SBPhotoModeController_C*                 PMC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::InitValuesInFrameGraph(class ABP_SBPhotoModeController_C* PMC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitValuesInFrameGraph");
		
		UUMG_PhotoModeControllMenu_C_InitValuesInFrameGraph_Params params {};
		params.PMC = PMC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteColor
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateVignetteColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteColor");
		
		UUMG_PhotoModeControllMenu_C_UpdateVignetteColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteEnable
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateVignetteEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateVignetteEnable");
		
		UUMG_PhotoModeControllMenu_C_UpdateVignetteEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActiveCameraControlViewWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetActiveCameraControlViewWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActiveCameraControlViewWidget");
		
		UUMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharaCreateClassSkillMenuItem_C*            Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharaCreateClassSkillMenuItem_C*            Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetLookAtPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLookAtPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetLookAtPlayer(bool bLookAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetLookAtPlayer");
		
		UUMG_PhotoModeControllMenu_C_SetLookAtPlayer_Params params {};
		params.bLookAtPlayer = bLookAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFocalDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetFocalDistance(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFocalDistance");
		
		UUMG_PhotoModeControllMenu_C_SetFocalDistance_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetFOV(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFOV");
		
		UUMG_PhotoModeControllMenu_C_SetFOV_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetRotation(const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRotation");
		
		UUMG_PhotoModeControllMenu_C_SetRotation_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActivePlayerControlViewWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetActivePlayerControlViewWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActivePlayerControlViewWidget");
		
		UUMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EmotionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature(const class FName& EmotionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature_Params params {};
		params.EmotionId = EmotionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacialType                                      FacialType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature_Params params {};
		params.FacialType = FacialType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDofUi
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateDofUi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDofUi");
		
		UUMG_PhotoModeControllMenu_C_UpdateDofUi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBLipSyncType                                     LipSyncType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature_Params params {};
		params.LipSyncType = LipSyncType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCloseEyes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature(bool bCloseEyes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature_Params params {};
		params.bCloseEyes = bCloseEyes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_TabFrame_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBButton_TabStamp_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetPhotoModeContoller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SBPhotoModeController_C*                 PMC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::SetPhotoModeContoller(class ABP_SBPhotoModeController_C* PMC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetPhotoModeContoller");
		
		UUMG_PhotoModeControllMenu_C_SetPhotoModeContoller_Params params {};
		params.PMC = PMC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.PreConstruct");
		
		UUMG_PhotoModeControllMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetControlMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPlayerControlMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetControlMode(bool bPlayerControlMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetControlMode");
		
		UUMG_PhotoModeControllMenu_C_SetControlMode_Params params {};
		params.bPlayerControlMode = bPlayerControlMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Construct");
		
		UUMG_PhotoModeControllMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetTalkMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTalkMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::SetTalkMode(bool bTalkMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetTalkMode");
		
		UUMG_PhotoModeControllMenu_C_SetTalkMode_Params params {};
		params.bTalkMode = bTalkMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Destruct");
		
		UUMG_PhotoModeControllMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnChangeVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControllMenu_C::OnChangeVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnChangeVisibleSetting");
		
		UUMG_PhotoModeControllMenu_C_OnChangeVisibleSetting_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDesign
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateDesign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDesign");
		
		UUMG_PhotoModeControllMenu_C_UpdateDesign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ToggleCameraControlView
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::ToggleCameraControlView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ToggleCameraControlView");
		
		UUMG_PhotoModeControllMenu_C_ToggleCameraControlView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.TogglePlayerControlView
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::TogglePlayerControlView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.TogglePlayerControlView");
		
		UUMG_PhotoModeControllMenu_C_TogglePlayerControlView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.RefreshPlayerControlData
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::RefreshPlayerControlData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.RefreshPlayerControlData");
		
		UUMG_PhotoModeControllMenu_C_RefreshPlayerControlData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateSkillList
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControllMenu_C::UpdateSkillList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateSkillList");
		
		UUMG_PhotoModeControllMenu_C_UpdateSkillList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Event_OnSavedUploadImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::Event_OnSavedUploadImage(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Event_OnSavedUploadImage");
		
		UUMG_PhotoModeControllMenu_C_Event_OnSavedUploadImage_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnPrepareScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnPrepareScreenshot(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnPrepareScreenshot");
		
		UUMG_PhotoModeControllMenu_C_OnPrepareScreenshot_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnFinishScreenshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::OnFinishScreenshot(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnFinishScreenshot");
		
		UUMG_PhotoModeControllMenu_C_OnFinishScreenshot_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Tick");
		
		UUMG_PhotoModeControllMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ExecuteUbergraph_UMG_PhotoModeControllMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControllMenu_C::ExecuteUbergraph_UMG_PhotoModeControllMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ExecuteUbergraph_UMG_PhotoModeControllMenu");
		
		UUMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoModeControllMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoModeControllMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C");
		return ptr;
	}

}


