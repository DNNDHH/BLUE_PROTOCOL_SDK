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
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Update Chat Log Status
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatLogWindowStatusSave                  InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsLoad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus, bool IsLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Update Chat Log Status");
		
		UUMG_ChatLogWindow_C_UpdateChatLogStatus_Params params {};
		params.InStatus = InStatus;
		params.IsLoad = IsLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Next Tab Selection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPrevious                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::NextTabSelection(bool bPrevious)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Next Tab Selection");
		
		UUMG_ChatLogWindow_C_NextTabSelection_Params params {};
		params.bPrevious = bPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Set Tab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::SetTab(ESBChatLogWindowSlot InSlot, bool bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Set Tab");
		
		UUMG_ChatLogWindow_C_SetTab_Params params {};
		params.InSlot = InSlot;
		params.bAdd = bAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFullChildWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFull                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::SetFullChildWindow(bool InFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFullChildWindow");
		
		UUMG_ChatLogWindow_C_SetFullChildWindow_Params params {};
		params.InFull = InFull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.HideWindow");
		
		UUMG_ChatLogWindow_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ShowWindow");
		
		UUMG_ChatLogWindow_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.RefreshLog
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::RefreshLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.RefreshLog");
		
		UUMG_ChatLogWindow_C_RefreshLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsShowNewMessageIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::IsShowNewMessageIcon(const struct FSBChatUIMessage& InMess, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsShowNewMessageIcon");
		
		UUMG_ChatLogWindow_C_IsShowNewMessageIcon_Params params {};
		params.InMess = InMess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.InitChildMode
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::InitChildMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.InitChildMode");
		
		UUMG_ChatLogWindow_C_InitChildMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::IsVisibleTab(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleTab");
		
		UUMG_ChatLogWindow_C_IsVisibleTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::IsVisibleLog(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.IsVisibleLog");
		
		UUMG_ChatLogWindow_C_IsVisibleLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetChatLogSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               ChatLogSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::SetChatLogSlot(ESBChatLogWindowSlot ChatLogSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetChatLogSlot");
		
		UUMG_ChatLogWindow_C_SetChatLogSlot_Params params {};
		params.ChatLogSlot = ChatLogSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsTab                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::SetVisible(bool bIsVisible, bool bIsTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetVisible");
		
		UUMG_ChatLogWindow_C_SetVisible_Params params {};
		params.bIsVisible = bIsVisible;
		params.bIsTab = bIsTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::SetEditMode(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetEditMode");
		
		UUMG_ChatLogWindow_C_SetEditMode_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWindow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::SetWindowMode(bool bWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowMode");
		
		UUMG_ChatLogWindow_C_SetWindowMode_Params params {};
		params.bWindow = bWindow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Construct");
		
		UUMG_ChatLogWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnReceiveMessageDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            Mess                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_ChatLogWindow_C::OnReceiveMessageDelegate_Event(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnReceiveMessageDelegate_Event");
		
		UUMG_ChatLogWindow_C_OnReceiveMessageDelegate_Event_Params params {};
		params.Message = Message;
		params.Mess = Mess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.Destruct");
		
		UUMG_ChatLogWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddWindow
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnClickedAddWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddWindow");
		
		UUMG_ChatLogWindow_C_OnClickedAddWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseWindow
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnClickedCloseWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseWindow");
		
		UUMG_ChatLogWindow_C_OnClickedCloseWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDetailType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnUpdateFilterType(int32_t InType, int32_t InDetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateFilterType");
		
		UUMG_ChatLogWindow_C_OnUpdateFilterType_Params params {};
		params.InType = InType;
		params.InDetailType = InDetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnAnimationFinished");
		
		UUMG_ChatLogWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateTempLogList
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnUpdateTempLogList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnUpdateTempLogList");
		
		UUMG_ChatLogWindow_C_OnUpdateTempLogList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddTab
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnClickedAddTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedAddTab");
		
		UUMG_ChatLogWindow_C_OnClickedAddTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnClickedCloseTab(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnClickedCloseTab");
		
		UUMG_ChatLogWindow_C_OnClickedCloseTab_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeTab
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnChangeTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeTab");
		
		UUMG_ChatLogWindow_C_OnChangeTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::SetWindowSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetWindowSize");
		
		UUMG_ChatLogWindow_C_SetWindowSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeUnreadVisibleEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatLogWindow_C::OnChangeUnreadVisibleEvent(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChangeUnreadVisibleEvent");
		
		UUMG_ChatLogWindow_C_OnChangeUnreadVisibleEvent_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnPopTimeUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_ChatLogWindow_C::OnPopTimeUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnPopTimeUpdate");
		
		UUMG_ChatLogWindow_C_OnPopTimeUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::SetFilterType(int32_t InType, int32_t InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.SetFilterType");
		
		UUMG_ChatLogWindow_C_SetFilterType_Params params {};
		params.InType = InType;
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ExecuteUbergraph_UMG_ChatLogWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::ExecuteUbergraph_UMG_ChatLogWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.ExecuteUbergraph_UMG_ChatLogWindow");
		
		UUMG_ChatLogWindow_C_ExecuteUbergraph_UMG_ChatLogWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabCloseRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DetailFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot, int32_t FilterType, int32_t DetailFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabCloseRequest__DelegateSignature");
		
		UUMG_ChatLogWindow_C_OnChatLogTabCloseRequest__DelegateSignature_Params params {};
		params.RequestSlot = RequestSlot;
		params.FilterType = FilterType;
		params.DetailFilterType = DetailFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabAddRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnChatLogTabAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogTabAddRequest__DelegateSignature");
		
		UUMG_ChatLogWindow_C_OnChatLogTabAddRequest__DelegateSignature_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowCloseRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnChatLogWindowCloseRequest__DelegateSignature(ESBChatLogWindowSlot SlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowCloseRequest__DelegateSignature");
		
		UUMG_ChatLogWindow_C_OnChatLogWindowCloseRequest__DelegateSignature_Params params {};
		params.SlotType = SlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowAddRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnChatLogWindowAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatLogWindowAddRequest__DelegateSignature");
		
		UUMG_ChatLogWindow_C_OnChatLogWindowAddRequest__DelegateSignature_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatRoomMessaageReceived__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatLogWindow_C::OnChatRoomMessaageReceived__DelegateSignature(class USBChatMessage* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatLogWindow.UMG_ChatLogWindow_C.OnChatRoomMessaageReceived__DelegateSignature");
		
		UUMG_ChatLogWindow_C_OnChatRoomMessaageReceived__DelegateSignature_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_ChatLogWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_ChatLogWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ChatLogWindow.UMG_ChatLogWindow_C");
		return ptr;
	}

}


