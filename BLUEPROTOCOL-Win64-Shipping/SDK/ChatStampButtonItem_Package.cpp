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
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.GetShortcutItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShortcutItemInfo                           OutShortcutItemInfo                                        (Parm, OutParm)
	 */
	void UChatStampButtonItem_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.GetShortcutItemInfo");
		
		UChatStampButtonItem_C_GetShortcutItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShortcutItemInfo != nullptr)
			*OutShortcutItemInfo = params.OutShortcutItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SefFloatStampOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUIZOrder                                          InOrder                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::SefFloatStampOrder(EUIZOrder InOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SefFloatStampOrder");
		
		UChatStampButtonItem_C_SefFloatStampOrder_Params params {};
		params.InOrder = InOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetShortcutIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisibility                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::SetShortcutIcon(const class FString& StampId, bool* IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetShortcutIcon");
		
		UChatStampButtonItem_C_SetShortcutIcon_Params params {};
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisibility != nullptr)
			*IsVisibility = params.IsVisibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetLimitedTimeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::SetLimitedTimeIcon(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetLimitedTimeIcon");
		
		UChatStampButtonItem_C_SetLimitedTimeIcon_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.GetFloatStampPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   OutPos                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::GetFloatStampPoint(struct FVector2D* OutPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.GetFloatStampPoint");
		
		UChatStampButtonItem_C_GetFloatStampPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPos != nullptr)
			*OutPos = params.OutPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetViewLarger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InViewLarger                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::SetViewLarger(bool InViewLarger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetViewLarger");
		
		UChatStampButtonItem_C_SetViewLarger_Params params {};
		params.InViewLarger = InViewLarger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetPressedSoundId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESystemSE                                          PressedSystemSEId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::SetPressedSoundId(ESystemSE PressedSystemSEId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetPressedSoundId");
		
		UChatStampButtonItem_C_SetPressedSoundId_Params params {};
		params.PressedSystemSEId = PressedSystemSEId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnDragDetected");
		
		UChatStampButtonItem_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UChatStampButtonItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnPreviewMouseButtonDown");
		
		UChatStampButtonItem_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetDragable");
		
		UChatStampButtonItem_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetIconSelected");
		
		UChatStampButtonItem_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::SetStamp(int32_t InStampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.SetStamp");
		
		UChatStampButtonItem_C_SetStamp_Params params {};
		params.InStampId = InStampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatStampButtonItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.Construct");
		
		UChatStampButtonItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatStampButtonItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.Destruct");
		
		UChatStampButtonItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnChangeCoolTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCoolTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatStampButtonItem_C::OnChangeCoolTimeStamp(bool IsCoolTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnChangeCoolTimeStamp");
		
		UChatStampButtonItem_C_OnChangeCoolTimeStamp_Params params {};
		params.IsCoolTime = IsCoolTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnValidStampDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::OnValidStampDelegate_Event_1(bool bValid, int32_t StampId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnValidStampDelegate_Event_1");
		
		UChatStampButtonItem_C_OnValidStampDelegate_Event_1_Params params {};
		params.bValid = bValid;
		params.StampId = StampId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.ExecuteUbergraph_ChatStampButtonItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::ExecuteUbergraph_ChatStampButtonItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.ExecuteUbergraph_ChatStampButtonItem");
		
		UChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelectRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetStampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChatStampButtonItem_C*                      InSelectItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::OnSelectRight__DelegateSignature(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelectRight__DelegateSignature");
		
		UChatStampButtonItem_C_OnSelectRight__DelegateSignature_Params params {};
		params.RetStampID = RetStampID;
		params.InSelectItem = InSelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetStampID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChatStampButtonItem_C*                      InSelectItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatStampButtonItem_C::OnSelect__DelegateSignature(int32_t RetStampID, class UChatStampButtonItem_C* InSelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelect__DelegateSignature");
		
		UChatStampButtonItem_C_OnSelect__DelegateSignature_Params params {};
		params.RetStampID = RetStampID;
		params.InSelectItem = InSelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatStampButtonItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatStampButtonItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatStampButtonItem.ChatStampButtonItem_C");
		return ptr;
	}

}


