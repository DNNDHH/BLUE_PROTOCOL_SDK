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
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.GetChatUnreadNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::GetChatUnreadNotify(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.GetChatUnreadNotify");
		
		UChatLogWindowList_C_GetChatUnreadNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.UpdateChatLogStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatLogWindowStatusSave                  InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UChatLogWindowList_C::UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.UpdateChatLogStatus");
		
		UChatLogWindowList_C_UpdateChatLogStatus_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.ChatCloseUnreadUpdate
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::ChatCloseUnreadUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.ChatCloseUnreadUpdate");
		
		UChatLogWindowList_C_ChatCloseUnreadUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.CheckUnread
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::CheckUnread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.CheckUnread");
		
		UChatLogWindowList_C_CheckUnread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetChatLogSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::SetChatLogSlot(ESBChatLogWindowSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetChatLogSlot");
		
		UChatLogWindowList_C_SetChatLogSlot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.Get Tab Type to Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               Slot                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::GetTabTypetoSlot(ESBChatLogWindowSlot* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.Get Tab Type to Slot");
		
		UChatLogWindowList_C_GetTabTypetoSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Slot != nullptr)
			*Slot = params.Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAdd                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::SetTab(ESBChatLogWindowSlot InSlot, bool bAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetTab");
		
		UChatLogWindowList_C_SetTab_Params params {};
		params.InSlot = InSlot;
		params.bAdd = bAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.ClearLogList
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::ClearLogList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.ClearLogList");
		
		UChatLogWindowList_C_ClearLogList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.IsScrollEndListView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::IsScrollEndListView(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.IsScrollEndListView");
		
		UChatLogWindowList_C_IsScrollEndListView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.Create Message Entry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bRecieve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::CreateMessageEntry(const struct FSBChatUIMessage& InMess, bool bRecieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.Create Message Entry");
		
		UChatLogWindowList_C_CreateMessageEntry_Params params {};
		params.InMess = InMess;
		params.bRecieve = bRecieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.GetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   retSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::GetWindowSize(struct FVector2D* retSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.GetWindowSize");
		
		UChatLogWindowList_C_GetWindowSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retSize != nullptr)
			*retSize = params.retSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::SetWindowSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetWindowSize");
		
		UChatLogWindowList_C_SetWindowSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetSeparationButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::SetSeparationButtonEnabled(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetSeparationButtonEnabled");
		
		UChatLogWindowList_C_SetSeparationButtonEnabled_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetFullChildWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFull                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::SetFullChildWindow(bool InFull)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetFullChildWindow");
		
		UChatLogWindowList_C_SetFullChildWindow_Params params {};
		params.InFull = InFull;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetForceUnhover
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::SetForceUnhover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetForceUnhover");
		
		UChatLogWindowList_C_SetForceUnhover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.SetListScrollEnd
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::SetListScrollEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.SetListScrollEnd");
		
		UChatLogWindowList_C_SetListScrollEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.RefreshLog
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::RefreshLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.RefreshLog");
		
		UChatLogWindowList_C_RefreshLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.InitChidMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTabTextId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::InitChidMode(int32_t InTabTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.InitChidMode");
		
		UChatLogWindowList_C_InitChidMode_Params params {};
		params.InTabTextId = InTabTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.ChangeDetailFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBChatDetailFilterType                            InDetailFilterType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::ChangeDetailFilter(bool InEnable, ESBChatDetailFilterType InDetailFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.ChangeDetailFilter");
		
		UChatLogWindowList_C_ChangeDetailFilter_Params params {};
		params.InEnable = InEnable;
		params.InDetailFilterType = InDetailFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.ChangeFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBChatFilterType                                  InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::ChangeFilter(bool InEnable, ESBChatFilterType InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.ChangeFilter");
		
		UChatLogWindowList_C_ChangeFilter_Params params {};
		params.InEnable = InEnable;
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.IsDirectChatPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::IsDirectChatPlayer(const struct FSBChatUIMessage& InMess, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.IsDirectChatPlayer");
		
		UChatLogWindowList_C_IsDirectChatPlayer_Params params {};
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
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.CreateChatLogList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDetailFilterType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::CreateChatLogList(int32_t InFilterType, int32_t InDetailFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.CreateChatLogList");
		
		UChatLogWindowList_C_CreateChatLogList_Params params {};
		params.InFilterType = InFilterType;
		params.InDetailFilterType = InDetailFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.Set Filter List Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::SetFilterListVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.Set Filter List Visible");
		
		UChatLogWindowList_C_SetFilterListVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.NextTabSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPrevious                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::NextTabSelection(bool bPrevious)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.NextTabSelection");
		
		UChatLogWindowList_C_NextTabSelection_Params params {};
		params.bPrevious = bPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.Change Tab Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogTabType                                  InTabType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::ChangeTabMode(ESBChatLogTabType InTabType, bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.Change Tab Mode");
		
		UChatLogWindowList_C_ChangeTabMode_Params params {};
		params.InTabType = InTabType;
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.InitFilterCheckBox
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::InitFilterCheckBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.InitFilterCheckBox");
		
		UChatLogWindowList_C_InitFilterCheckBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ChatLogWindow_C*                        InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDetailFilterType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBChatLogTabType                                  InTabType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::Init(class UUMG_ChatLogWindow_C* InWidget, int32_t InFilterType, int32_t InDetailFilterType, ESBChatLogTabType InTabType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.Init");
		
		UChatLogWindowList_C_Init_Params params {};
		params.InWidget = InWidget;
		params.InFilterType = InFilterType;
		params.InDetailFilterType = InDetailFilterType;
		params.InTabType = InTabType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.CloseFilter
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::CloseFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.CloseFilter");
		
		UChatLogWindowList_C_CloseFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnReciveMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bRecieve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::OnReciveMessage(const struct FSBChatUIMessage& InMess, bool bRecieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnReciveMessage");
		
		UChatLogWindowList_C_OnReciveMessage_Params params {};
		params.InMess = InMess;
		params.bRecieve = bRecieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogWindowList_C_BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.ExecuteUbergraph_ChatLogWindowList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::ExecuteUbergraph_ChatLogWindowList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.ExecuteUbergraph_ChatLogWindowList");
		
		UChatLogWindowList_C_ExecuteUbergraph_ChatLogWindowList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChangeUnreadVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::OnChangeUnreadVisible__DelegateSignature(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChangeUnreadVisible__DelegateSignature");
		
		UChatLogWindowList_C_OnChangeUnreadVisible__DelegateSignature_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChangeChatUnreadNotify__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChatUnreadNotify                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowList_C::OnChangeChatUnreadNotify__DelegateSignature(bool IsChatUnreadNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChangeChatUnreadNotify__DelegateSignature");
		
		UChatLogWindowList_C_OnChangeChatUnreadNotify__DelegateSignature_Params params {};
		params.IsChatUnreadNotify = IsChatUnreadNotify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChangeTab__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::OnChangeTab__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChangeTab__DelegateSignature");
		
		UChatLogWindowList_C_OnChangeTab__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabCloseRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabCloseRequest__DelegateSignature");
		
		UChatLogWindowList_C_OnChatLogTabCloseRequest__DelegateSignature_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabAddRequest__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::OnChatLogTabAddRequest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogTabAddRequest__DelegateSignature");
		
		UChatLogWindowList_C_OnChatLogTabAddRequest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChangeFilterType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDetailType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowList_C::OnChangeFilterType__DelegateSignature(int32_t InType, int32_t InDetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChangeFilterType__DelegateSignature");
		
		UChatLogWindowList_C_OnChangeFilterType__DelegateSignature_Params params {};
		params.InType = InType;
		params.InDetailType = InDetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowCloseRequest__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::OnChatLogWindowCloseRequest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowCloseRequest__DelegateSignature");
		
		UChatLogWindowList_C_OnChatLogWindowCloseRequest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowAddRequest__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogWindowList_C::OnChatLogWindowAddRequest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowList.ChatLogWindowList_C.OnChatLogWindowAddRequest__DelegateSignature");
		
		UChatLogWindowList_C_OnChatLogWindowAddRequest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogWindowList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogWindowList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogWindowList.ChatLogWindowList_C");
		return ptr;
	}

}


