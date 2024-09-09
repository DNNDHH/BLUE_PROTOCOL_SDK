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
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetShortcutRing
	 * 		Flags  -> ()
	 */
	class USBShortcutRingWidget* ULayoutableHUD_C::GetShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetShortcutRing");
		
		ULayoutableHUD_C_GetShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetNewStepListWidget
	 * 		Flags  -> ()
	 */
	class USBStepList* ULayoutableHUD_C::GetNewStepListWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetNewStepListWidget");
		
		ULayoutableHUD_C_GetNewStepListWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ReleaseDialogWidget
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ReleaseDialogWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ReleaseDialogWidget");
		
		ULayoutableHUD_C_ReleaseDialogWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetPlayerGaugeBaseWidget
	 * 		Flags  -> ()
	 */
	class USBPlayerGaugeBaseWidget* ULayoutableHUD_C::GetPlayerGaugeBaseWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetPlayerGaugeBaseWidget");
		
		ULayoutableHUD_C_GetPlayerGaugeBaseWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetWholemapWidget
	 * 		Flags  -> ()
	 */
	class USBWholeMap* ULayoutableHUD_C::GetWholemapWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetWholemapWidget");
		
		ULayoutableHUD_C_GetWholemapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetMinimapWidget
	 * 		Flags  -> ()
	 */
	class USBMiniMapWidget* ULayoutableHUD_C::GetMinimapWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetMinimapWidget");
		
		ULayoutableHUD_C_GetMinimapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightRepeat
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ItemSelectorMoveRightRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightRepeat");
		
		ULayoutableHUD_C_ItemSelectorMoveRightRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightPress
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ItemSelectorMoveRightPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveRightPress");
		
		ULayoutableHUD_C_ItemSelectorMoveRightPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftRepeat
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ItemSelectorMoveLeftRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftRepeat");
		
		ULayoutableHUD_C_ItemSelectorMoveLeftRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftPress
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ItemSelectorMoveLeftPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorMoveLeftPress");
		
		ULayoutableHUD_C_ItemSelectorMoveLeftPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorExe
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ItemSelectorExe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorExe");
		
		ULayoutableHUD_C_ItemSelectorExe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.NextStepList
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::NextStepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.NextStepList");
		
		ULayoutableHUD_C_NextStepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnDragOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULayoutableHUD_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnDragOver");
		
		ULayoutableHUD_C_OnDragOver_Params params {};
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
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.EditMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PressTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::EditMap(float PressTime, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.EditMap");
		
		ULayoutableHUD_C_EditMap_Params params {};
		params.PressTime = PressTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SwitchingMap
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::SwitchingMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SwitchingMap");
		
		ULayoutableHUD_C_SwitchingMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ChatTempLogsInit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ChatTempLogsInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ChatTempLogsInit");
		
		ULayoutableHUD_C_ChatTempLogsInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.GetHitFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHitFlash_C*                                 HitFlash                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::GetHitFlash(class UHitFlash_C** HitFlash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.GetHitFlash");
		
		ULayoutableHUD_C_GetHitFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitFlash != nullptr)
			*HitFlash = params.HitFlash;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply ULayoutableHUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnMouseButtonDown");
		
		ULayoutableHUD_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Get_PartyInfo_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility ULayoutableHUD_C::Get_PartyInfo_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Get_PartyInfo_Visibility_1");
		
		ULayoutableHUD_C_Get_PartyInfo_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ZSort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 SortWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::ZSort(class UUserWidget* SortWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ZSort");
		
		ULayoutableHUD_C_ZSort_Params params {};
		params.SortWidget = SortWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.CreateClippingAnchors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnchors                                    Anchors                                                    (Parm, OutParm, NoDestructor)
	 */
	void ULayoutableHUD_C::CreateClippingAnchors(struct FAnchors* Anchors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.CreateClippingAnchors");
		
		ULayoutableHUD_C_CreateClippingAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anchors != nullptr)
			*Anchors = params.Anchors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply ULayoutableHUD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnKeyDown");
		
		ULayoutableHUD_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.CollectMovealObject
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::CollectMovealObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.CollectMovealObject");
		
		ULayoutableHUD_C_CollectMovealObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Term
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Term()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Term");
		
		ULayoutableHUD_C_Term_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Init
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Init");
		
		ULayoutableHUD_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULayoutableHUD_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnDrop");
		
		ULayoutableHUD_C_OnDrop_Params params {};
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
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.BindForceCloseEvent
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::BindForceCloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.BindForceCloseEvent");
		
		ULayoutableHUD_C_BindForceCloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnbindForceCloseEvent
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnbindForceCloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnbindForceCloseEvent");
		
		ULayoutableHUD_C_UnbindForceCloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnRequestTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::OnRequestTerm(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnRequestTerm");
		
		ULayoutableHUD_C_OnRequestTerm_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnClosedMenuDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::OnClosedMenuDetected(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnClosedMenuDetected");
		
		ULayoutableHUD_C_OnClosedMenuDetected_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Bind DeadCheck
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::BindDeadCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Bind DeadCheck");
		
		ULayoutableHUD_C_BindDeadCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnBind DeadCheck
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnBindDeadCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnBind DeadCheck");
		
		ULayoutableHUD_C_UnBindDeadCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnDeadPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::OnDeadPlayer(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnDeadPlayer");
		
		ULayoutableHUD_C_OnDeadPlayer_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.BindVisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::BindVisibleSettingChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.BindVisibleSettingChangeDelegate");
		
		ULayoutableHUD_C_BindVisibleSettingChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnbindVisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnbindVisibleSettingChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnbindVisibleSettingChangeDelegate");
		
		ULayoutableHUD_C_UnbindVisibleSettingChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnChangeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnChangeVisibility");
		
		ULayoutableHUD_C_OnChangeVisibility_Params params {};
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
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.BindWholeMap
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::BindWholeMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.BindWholeMap");
		
		ULayoutableHUD_C_BindWholeMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnbindWholeMap
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnbindWholeMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnbindWholeMap");
		
		ULayoutableHUD_C_UnbindWholeMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnOpenWholeMapEditWindow
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnOpenWholeMapEditWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnOpenWholeMapEditWindow");
		
		ULayoutableHUD_C_OnOpenWholeMapEditWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnCloseWholeMapEditWindow
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnCloseWholeMapEditWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnCloseWholeMapEditWindow");
		
		ULayoutableHUD_C_OnCloseWholeMapEditWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OpenContinueCheckDialog
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OpenContinueCheckDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OpenContinueCheckDialog");
		
		ULayoutableHUD_C_OpenContinueCheckDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ContinueDialogFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::ContinueDialogFinish(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ContinueDialogFinish");
		
		ULayoutableHUD_C_ContinueDialogFinish_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheck
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::PresetSelectContinueCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheck");
		
		ULayoutableHUD_C_PresetSelectContinueCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheckFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::PresetSelectContinueCheckFinish(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PresetSelectContinueCheckFinish");
		
		ULayoutableHUD_C_PresetSelectContinueCheckFinish_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PresetEndCheck
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::PresetEndCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PresetEndCheck");
		
		ULayoutableHUD_C_PresetEndCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PresetEndCheckFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCancel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::PresetEndCheckFinish(bool bIsCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PresetEndCheckFinish");
		
		ULayoutableHUD_C_PresetEndCheckFinish_Params params {};
		params.bIsCancel = bIsCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.BindShortcutRing
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::BindShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.BindShortcutRing");
		
		ULayoutableHUD_C_BindShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnbindShortcutRing
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnbindShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnbindShortcutRing");
		
		ULayoutableHUD_C_UnbindShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRing
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnOpenShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRing");
		
		ULayoutableHUD_C_OnOpenShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRing
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnCloseShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRing");
		
		ULayoutableHUD_C_OnCloseShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRingEdit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnOpenShortcutRingEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnOpenShortcutRingEdit");
		
		ULayoutableHUD_C_OnOpenShortcutRingEdit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRingEdit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnCloseShortcutRingEdit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnCloseShortcutRingEdit");
		
		ULayoutableHUD_C_OnCloseShortcutRingEdit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Chat_Construct
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Chat_Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Chat_Construct");
		
		ULayoutableHUD_C_Chat_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetChatLogEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEdit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SetChatLogEditMode(bool InEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetChatLogEditMode");
		
		ULayoutableHUD_C_SetChatLogEditMode_Params params {};
		params.InEdit = InEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LoadChatTempLogWindowSize
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::LoadChatTempLogWindowSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LoadChatTempLogWindowSize");
		
		ULayoutableHUD_C_LoadChatTempLogWindowSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SaveChatTempLogWindowSize
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::SaveChatTempLogWindowSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SaveChatTempLogWindowSize");
		
		ULayoutableHUD_C_SaveChatTempLogWindowSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetEditModeWidgets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SetEditModeWidgets(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetEditModeWidgets");
		
		ULayoutableHUD_C_SetEditModeWidgets_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.StepListEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::StepListEditMode(bool bEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.StepListEditMode");
		
		ULayoutableHUD_C_StepListEditMode_Params params {};
		params.bEditMode = bEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PartyInfoEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::PartyInfoEditMode(bool bEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PartyInfoEditMode");
		
		ULayoutableHUD_C_PartyInfoEditMode_Params params {};
		params.bEditMode = bEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetTutorialPlayerGaugeHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerGaugeHighlight                              HighLight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SetTutorialPlayerGaugeHighlight(EPlayerGaugeHighlight HighLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetTutorialPlayerGaugeHighlight");
		
		ULayoutableHUD_C_SetTutorialPlayerGaugeHighlight_Params params {};
		params.HighLight = HighLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.FocusTargetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::FocusTargetEditMode(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.FocusTargetEditMode");
		
		ULayoutableHUD_C_FocusTargetEditMode_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetFocusActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SetFocusActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetFocusActor");
		
		ULayoutableHUD_C_SetFocusActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetBufIconEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEdit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SetBufIconEditMode(bool IsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetBufIconEditMode");
		
		ULayoutableHUD_C_SetBufIconEditMode_Params params {};
		params.IsEdit = IsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetTutorialSkillHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillPaletteTutorialFocus                         FocusMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SetTutorialSkillHighlight(ESkillPaletteTutorialFocus FocusMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetTutorialSkillHighlight");
		
		ULayoutableHUD_C_SetTutorialSkillHighlight_Params params {};
		params.FocusMode = FocusMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetTutorialSpecialGaugeHighlight
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::SetTutorialSpecialGaugeHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetTutorialSpecialGaugeHighlight");
		
		ULayoutableHUD_C_SetTutorialSpecialGaugeHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetTutorialImagineGaugeHighlight
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::SetTutorialImagineGaugeHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetTutorialImagineGaugeHighlight");
		
		ULayoutableHUD_C_SetTutorialImagineGaugeHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.KeyGuideEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::KeyGuideEditMode(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.KeyGuideEditMode");
		
		ULayoutableHUD_C_KeyGuideEditMode_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.HPSTEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::HPSTEditMode(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.HPSTEditMode");
		
		ULayoutableHUD_C_HPSTEditMode_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SkillInfoEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SkillInfoEditMode(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SkillInfoEditMode");
		
		ULayoutableHUD_C_SkillInfoEditMode_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ShortcutRingEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::ShortcutRingEditMode(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ShortcutRingEditMode");
		
		ULayoutableHUD_C_ShortcutRingEditMode_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetEditModeClassHuds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SetEditModeClassHuds(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetEditModeClassHuds");
		
		ULayoutableHUD_C_SetEditModeClassHuds_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P007EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P007EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P007EditMode");
		
		ULayoutableHUD_C_P007EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Class EditMode Disable
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ClassEditModeDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Class EditMode Disable");
		
		ULayoutableHUD_C_ClassEditModeDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P011EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P011EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P011EditMode");
		
		ULayoutableHUD_C_P011EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.DesignMode
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::DesignMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.DesignMode");
		
		ULayoutableHUD_C_DesignMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P012EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P012EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P012EditMode");
		
		ULayoutableHUD_C_P012EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P019 EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P019EditMode(bool bEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P019 EditMode");
		
		ULayoutableHUD_C_P019EditMode_Params params {};
		params.bEditMode = bEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P020EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P020EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P020EditMode");
		
		ULayoutableHUD_C_P020EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.MiniMapEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEditMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::MiniMapEditMode(bool IsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.MiniMapEditMode");
		
		ULayoutableHUD_C_MiniMapEditMode_Params params {};
		params.IsEditMode = IsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P006EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P006EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P006EditMode");
		
		ULayoutableHUD_C_P006EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ReticleEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::ReticleEditMode(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ReticleEditMode");
		
		ULayoutableHUD_C_ReticleEditMode_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.P021EditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::P021EditMode(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.P021EditMode");
		
		ULayoutableHUD_C_P021EditMode_Params params {};
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ItemSelectorEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::ItemSelectorEditMode(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ItemSelectorEditMode");
		
		ULayoutableHUD_C_ItemSelectorEditMode_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ContentActionEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::ContentActionEditMode(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ContentActionEditMode");
		
		ULayoutableHUD_C_ContentActionEditMode_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SaveHudRayoutPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovable_C*                                  ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCustomHudLayoutSlot                             Slot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SaveHudRayoutPosition(class UMovable_C* ref, ESBCustomHudLayoutSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SaveHudRayoutPosition");
		
		ULayoutableHUD_C_SaveHudRayoutPosition_Params params {};
		params.ref = ref;
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LoadHudRayoutPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovable_C*                                  ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCustomHudLayoutSlot                             HudSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::LoadHudRayoutPosition(class UMovable_C* ref, ESBCustomHudLayoutSlot HudSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LoadHudRayoutPosition");
		
		ULayoutableHUD_C_LoadHudRayoutPosition_Params params {};
		params.ref = ref;
		params.HudSlot = HudSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SaveToFile
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::SaveToFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SaveToFile");
		
		ULayoutableHUD_C_SaveToFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LoadFromFile
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::LoadFromFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LoadFromFile");
		
		ULayoutableHUD_C_LoadFromFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnExitEditMode
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnExitEditMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnExitEditMode");
		
		ULayoutableHUD_C_OnExitEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Event_OpenMenu
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Event_OpenMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Event_OpenMenu");
		
		ULayoutableHUD_C_Event_OpenMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Event_CloseMenu
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Event_CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Event_CloseMenu");
		
		ULayoutableHUD_C_Event_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnUpdateHudBeltVisible
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OnUpdateHudBeltVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnUpdateHudBeltVisible");
		
		ULayoutableHUD_C_OnUpdateHudBeltVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.InitGeneral
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::InitGeneral()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.InitGeneral");
		
		ULayoutableHUD_C_InitGeneral_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.UnbindOnUpdateHudBeltVisible
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::UnbindOnUpdateHudBeltVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.UnbindOnUpdateHudBeltVisible");
		
		ULayoutableHUD_C_UnbindOnUpdateHudBeltVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LoadPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELayoutPresetTypes                                 eLayoutPreset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::LoadPreset(ELayoutPresetTypes eLayoutPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LoadPreset");
		
		ULayoutableHUD_C_LoadPreset_Params params {};
		params.eLayoutPreset = eLayoutPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PresetLoad
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::PresetLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PresetLoad");
		
		ULayoutableHUD_C_PresetLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LoadCustomSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCustomHudLayoutSlot                             LoadCustomSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::LoadCustomSave(ESBCustomHudLayoutSlot LoadCustomSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LoadCustomSave");
		
		ULayoutableHUD_C_LoadCustomSave_Params params {};
		params.LoadCustomSlot = LoadCustomSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Show Custom SlotMenu
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ShowCustomSlotMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Show Custom SlotMenu");
		
		ULayoutableHUD_C_ShowCustomSlotMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Save CustomSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCustomHudLayoutSlot                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SaveCustomSlot(ESBCustomHudLayoutSlot Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Save CustomSlot");
		
		ULayoutableHUD_C_SaveCustomSlot_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OpenInitSelect
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::OpenInitSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OpenInitSelect");
		
		ULayoutableHUD_C_OpenInitSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.InitLoadPreset
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::InitLoadPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.InitLoadPreset");
		
		ULayoutableHUD_C_InitLoadPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.OnFinishedPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCancel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::OnFinishedPreset(bool bIsCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.OnFinishedPreset");
		
		ULayoutableHUD_C_OnFinishedPreset_Params params {};
		params.bIsCancel = bIsCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Event_LayoutMenuClose
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Event_LayoutMenuClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Event_LayoutMenuClose");
		
		ULayoutableHUD_C_Event_LayoutMenuClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.LayoutMenuExit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::LayoutMenuExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.LayoutMenuExit");
		
		ULayoutableHUD_C_LayoutMenuExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ApplyPreset
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ApplyPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ApplyPreset");
		
		ULayoutableHUD_C_ApplyPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.CloseHudCustomMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCancel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::CloseHudCustomMenu(bool bIsCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.CloseHudCustomMenu");
		
		ULayoutableHUD_C_CloseHudCustomMenu_Params params {};
		params.bIsCancel = bIsCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.PreConstruct");
		
		ULayoutableHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Construct");
		
		ULayoutableHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::SetEditMode(bool bEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetEditMode");
		
		ULayoutableHUD_C_SetEditMode_Params params {};
		params.bEditMode = bEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.CheckVisibleDescription
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::CheckVisibleDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.CheckVisibleDescription");
		
		ULayoutableHUD_C_CheckVisibleDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Reinit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Reinit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Reinit");
		
		ULayoutableHUD_C_Reinit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ResetZOrderForBaseOrders
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::ResetZOrderForBaseOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ResetZOrderForBaseOrders");
		
		ULayoutableHUD_C_ResetZOrderForBaseOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.FocusForTutorialWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELayoutableHUD_FocusableWidets                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::FocusForTutorialWidget(ELayoutableHUD_FocusableWidets FocusWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.FocusForTutorialWidget");
		
		ULayoutableHUD_C_FocusForTutorialWidget_Params params {};
		params.FocusWidget = FocusWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.TitorialHudInit
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::TitorialHudInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.TitorialHudInit");
		
		ULayoutableHUD_C_TitorialHudInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.Destruct");
		
		ULayoutableHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2");
		
		ULayoutableHUD_C_WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3");
		
		ULayoutableHUD_C_WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.AnimationFinish
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::AnimationFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.AnimationFinish");
		
		ULayoutableHUD_C_AnimationFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.SetVisibleDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::SetVisibleDescription(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.SetVisibleDescription");
		
		ULayoutableHUD_C_SetVisibleDescription_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ExecuteUbergraph_LayoutableHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULayoutableHUD_C::ExecuteUbergraph_LayoutableHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ExecuteUbergraph_LayoutableHUD");
		
		ULayoutableHUD_C_ExecuteUbergraph_LayoutableHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.ChangeEditMode__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEditMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULayoutableHUD_C::ChangeEditMode__DelegateSignature(bool bIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.ChangeEditMode__DelegateSignature");
		
		ULayoutableHUD_C_ChangeEditMode__DelegateSignature_Params params {};
		params.bIsEditMode = bIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LayoutableHUD.LayoutableHUD_C.CloseOnDown__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULayoutableHUD_C::CloseOnDown__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LayoutableHUD.LayoutableHUD_C.CloseOnDown__DelegateSignature");
		
		ULayoutableHUD_C_CloseOnDown__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayoutableHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULayoutableHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LayoutableHUD.LayoutableHUD_C");
		return ptr;
	}

}


