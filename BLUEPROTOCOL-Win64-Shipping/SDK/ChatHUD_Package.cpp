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
	 * 		Name   -> Function ChatHUD.ChatHUD_C.SetFishHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFishingHUD_C*                               HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::SetFishHUD(class UFishingHUD_C* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.SetFishHUD");
		
		UChatHUD_C_SetFishHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Get Log Window Visible Status List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       IsVisibleStatusList                                        (Parm, OutParm)
	 */
	void UChatHUD_C::GetLogWindowVisibleStatusList(TArray<bool>* IsVisibleStatusList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Get Log Window Visible Status List");
		
		UChatHUD_C_GetLogWindowVisibleStatusList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisibleStatusList != nullptr)
			*IsVisibleStatusList = params.IsVisibleStatusList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.UpdateUnread
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::UpdateUnread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.UpdateUnread");
		
		UChatHUD_C_UpdateUnread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CheckLogWindowFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     logType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBChatLogWindowSlot                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::CheckLogWindowFilter(ESBChatLogType logType, ESBChatLogWindowSlot NewParam, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CheckLogWindowFilter");
		
		UChatHUD_C_CheckLogWindowFilter_Params params {};
		params.logType = logType;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CheckReceivedMessageSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     logType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCloseArea                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::CheckReceivedMessageSound(ESBChatLogType logType, bool IsCloseArea, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CheckReceivedMessageSound");
		
		UChatHUD_C_CheckReceivedMessageSound_Params params {};
		params.logType = logType;
		params.IsCloseArea = IsCloseArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.UpdateMouseCursorIcon
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::UpdateMouseCursorIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.UpdateMouseCursorIcon");
		
		UChatHUD_C_UpdateMouseCursorIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ForceClose
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::ForceClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ForceClose");
		
		UChatHUD_C_ForceClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.IsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::IsActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.IsActive");
		
		UChatHUD_C_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.On_TextSizeComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UChatHUD_C::On_TextSizeComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.On_TextSizeComboBox_GenerateWidget_1");
		
		UChatHUD_C_On_TextSizeComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ResetAllLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::ResetAllLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ResetAllLayout");
		
		UChatHUD_C_ResetAllLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UChatHUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnMouseButtonDown");
		
		UChatHUD_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ChatHUD.ChatHUD_C.LoadStampHisoryData
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::LoadStampHisoryData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.LoadStampHisoryData");
		
		UChatHUD_C_LoadStampHisoryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.InitChatHUDLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::InitChatHUDLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.InitChatHUDLayout");
		
		UChatHUD_C_InitChatHUDLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.InitStampEmoteHUDLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::InitStampEmoteHUDLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.InitStampEmoteHUDLayout");
		
		UChatHUD_C_InitStampEmoteHUDLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.SaveLayoutWindowSizeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::SaveLayoutWindowSizeData(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.SaveLayoutWindowSizeData");
		
		UChatHUD_C_SaveLayoutWindowSizeData_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnDragOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChatHUD_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnDragOver");
		
		UChatHUD_C_OnDragOver_Params params {};
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
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UChatHUD_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnDrop");
		
		UChatHUD_C_OnDrop_Params params {};
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
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Refresh Chat Logs
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::RefreshChatLogs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Refresh Chat Logs");
		
		UChatHUD_C_RefreshChatLogs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.SetChatLogsWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InWindow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::SetChatLogsWindow(bool InWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.SetChatLogsWindow");
		
		UChatHUD_C_SetChatLogsWindow_Params params {};
		params.InWindow = InWindow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.InitChatLogSlots
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::InitChatLogSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.InitChatLogSlots");
		
		UChatHUD_C_InitChatLogSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.SaveHudLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::SaveHudLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.SaveHudLayout");
		
		UChatHUD_C_SaveHudLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.SaveLayoutData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::SaveLayoutData(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.SaveLayoutData");
		
		UChatHUD_C_SaveLayoutData_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.LoadHudLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::LoadHudLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.LoadHudLayout");
		
		UChatHUD_C_LoadHudLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.InitChatLogsHUDLayout
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::InitChatLogsHUDLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.InitChatLogsHUDLayout");
		
		UChatHUD_C_InitChatLogsHUDLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.AddTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::AddTab(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.AddTab");
		
		UChatHUD_C_AddTab_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.AddChatLogWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::AddChatLogWindow(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.AddChatLogWindow");
		
		UChatHUD_C_AddChatLogWindow_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.IsFullChildLogWindows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::IsFullChildLogWindows(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.IsFullChildLogWindows");
		
		UChatHUD_C_IsFullChildLogWindows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Hide
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Hide");
		
		UChatHUD_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Show
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Show");
		
		UChatHUD_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_TextMode
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_TextMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_TextMode");
		
		UChatHUD_C_KeyShortcut_TextMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_FixedPhrase
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_FixedPhrase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_FixedPhrase");
		
		UChatHUD_C_KeyShortcut_FixedPhrase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_Stamp
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_Stamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_Stamp");
		
		UChatHUD_C_KeyShortcut_Stamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_ChatTypeList
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_ChatTypeList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_ChatTypeList");
		
		UChatHUD_C_KeyShortcut_ChatTypeList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_PlayerList
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_PlayerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_PlayerList");
		
		UChatHUD_C_KeyShortcut_PlayerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.KeyShortcut_TabChange
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::KeyShortcut_TabChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.KeyShortcut_TabChange");
		
		UChatHUD_C_KeyShortcut_TabChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UChatHUD_C_BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.InputPadButton
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::InputPadButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.InputPadButton");
		
		UChatHUD_C_InputPadButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature");
		
		UChatHUD_C_BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OpenCursorModeToOtherPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InOtherPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OpenCursorModeToOtherPCMenu");
		
		UChatHUD_C_OpenCursorModeToOtherPCMenu_Params params {};
		params.InOtherPC = InOtherPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature");
		
		UChatHUD_C_BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnCloseAdminWindow
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnCloseAdminWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnCloseAdminWindow");
		
		UChatHUD_C_OnCloseAdminWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnMouseButtonDownByAdminMode
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnMouseButtonDownByAdminMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnMouseButtonDownByAdminMode");
		
		UChatHUD_C_OnMouseButtonDownByAdminMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Construct_Admin
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Construct_Admin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Construct_Admin");
		
		UChatHUD_C_Construct_Admin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnAdminCommandRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAdminCommandCallbackRequest                     Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::OnAdminCommandRequest(ESBAdminCommandCallbackRequest Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnAdminCommandRequest");
		
		UChatHUD_C_OnAdminCommandRequest_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OpenGotoBookmarkWindow
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OpenGotoBookmarkWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OpenGotoBookmarkWindow");
		
		UChatHUD_C_OpenGotoBookmarkWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Hide_Admin
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Hide_Admin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Hide_Admin");
		
		UChatHUD_C_Hide_Admin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.UnbindAdminCommandCallbeck
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::UnbindAdminCommandCallbeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.UnbindAdminCommandCallbeck");
		
		UChatHUD_C_UnbindAdminCommandCallbeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Emite_Construct
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Emite_Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Emite_Construct");
		
		UChatHUD_C_Emite_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnChang_ChatMode_Event
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnChang_ChatMode_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnChang_ChatMode_Event");
		
		UChatHUD_C_OnChang_ChatMode_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Construct_Chat
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Construct_Chat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Construct_Chat");
		
		UChatHUD_C_Construct_Chat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnClosedChatWindow
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnClosedChatWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnClosedChatWindow");
		
		UChatHUD_C_OnClosedChatWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.RequestChatLogAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::RequestChatLogAdd(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.RequestChatLogAdd");
		
		UChatHUD_C_RequestChatLogAdd_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CloseRequestChatLogs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::CloseRequestChatLogs(ESBChatLogWindowSlot SlotType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CloseRequestChatLogs");
		
		UChatHUD_C_CloseRequestChatLogs_Params params {};
		params.SlotType = SlotType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnChatRoomMessageReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::OnChatRoomMessageReceived(class USBChatMessage* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnChatRoomMessageReceived");
		
		UChatHUD_C_OnChatRoomMessageReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.RequestDirectChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::RequestDirectChat(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.RequestDirectChat");
		
		UChatHUD_C_RequestDirectChat_Params params {};
		params.PlayerId = PlayerId;
		params.Name = Name;
		params.CharacterId = CharacterId;
		params.PrivilegeType = PrivilegeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnClickedClose
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnClickedClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnClickedClose");
		
		UChatHUD_C_OnClickedClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ChatTempLogs_Init
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::ChatTempLogs_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ChatTempLogs_Init");
		
		UChatHUD_C_ChatTempLogs_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.RequestTabAdd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::RequestTabAdd(ESBChatLogWindowSlot RequestSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.RequestTabAdd");
		
		UChatHUD_C_RequestTabAdd_Params params {};
		params.RequestSlot = RequestSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.RequestTabClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               RequestSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InDetailFilterType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::RequestTabClose(ESBChatLogWindowSlot RequestSlot, int32_t InFilterType, int32_t InDetailFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.RequestTabClose");
		
		UChatHUD_C_RequestTabClose_Params params {};
		params.RequestSlot = RequestSlot;
		params.InFilterType = InFilterType;
		params.InDetailFilterType = InDetailFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.DelayUpdateMouseCursorIcon
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::DelayUpdateMouseCursorIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.DelayUpdateMouseCursorIcon");
		
		UChatHUD_C_DelayUpdateMouseCursorIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.UpdateCursorMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Flag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::UpdateCursorMode(bool Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.UpdateCursorMode");
		
		UChatHUD_C_UpdateCursorMode_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UChatHUD_C_BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UChatHUD_C_BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.EndChatSettingWindow
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::EndChatSettingWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.EndChatSettingWindow");
		
		UChatHUD_C_EndChatSettingWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ChatSettingWindow_OnClose_Event
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::ChatSettingWindow_OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ChatSettingWindow_OnClose_Event");
		
		UChatHUD_C_ChatSettingWindow_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnRefreshChatLogs_event
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnRefreshChatLogs_event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnRefreshChatLogs_event");
		
		UChatHUD_C_OnRefreshChatLogs_event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnLogDispTime_event
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnLogDispTime_event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnLogDispTime_event");
		
		UChatHUD_C_OnLogDispTime_event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Construct");
		
		UChatHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Init
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Init");
		
		UChatHUD_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnChangeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnChangeVisibility");
		
		UChatHUD_C_OnChangeVisibility_Params params {};
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
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UChatHUD_C_BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnReceivedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            Mess                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatHUD_C::OnReceivedMessage(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnReceivedMessage");
		
		UChatHUD_C_OnReceivedMessage_Params params {};
		params.Message = Message;
		params.Mess = Mess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.Destruct");
		
		UChatHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnGameOverDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnGameOverDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnGameOverDelegate_Event_1");
		
		UChatHUD_C_OnGameOverDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		UChatHUD_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.MouseInteraction
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::MouseInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.MouseInteraction");
		
		UChatHUD_C_MouseInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.MouseInteractionRelease
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::MouseInteractionRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.MouseInteractionRelease");
		
		UChatHUD_C_MouseInteractionRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnRequestTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckUnlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatHUD_C::OnRequestTutorialHelp(bool CheckUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnRequestTutorialHelp");
		
		UChatHUD_C_OnRequestTutorialHelp_Params params {};
		params.CheckUnlock = CheckUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Up
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Up()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Up");
		
		UChatHUD_C_CameraCtrl_Up_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Up_Rel
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Up_Rel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Up_Rel");
		
		UChatHUD_C_CameraCtrl_Up_Rel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Down
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Down()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Down");
		
		UChatHUD_C_CameraCtrl_Down_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Down_Rel
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Down_Rel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Down_Rel");
		
		UChatHUD_C_CameraCtrl_Down_Rel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Left
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Left");
		
		UChatHUD_C_CameraCtrl_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Left_Rel
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Left_Rel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Left_Rel");
		
		UChatHUD_C_CameraCtrl_Left_Rel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Right
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Right");
		
		UChatHUD_C_CameraCtrl_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.CameraCtrl_Right_Rel
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::CameraCtrl_Right_Rel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.CameraCtrl_Right_Rel");
		
		UChatHUD_C_CameraCtrl_Right_Rel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnClosePCList_Event_1
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnClosePCList_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnClosePCList_Event_1");
		
		UChatHUD_C_OnClosePCList_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.OnClose_Event_1
	 * 		Flags  -> ()
	 */
	void UChatHUD_C::OnClose_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.OnClose_Event_1");
		
		UChatHUD_C_OnClose_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ResultClose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::ResultClose(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ResultClose");
		
		UChatHUD_C_ResultClose_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatHUD.ChatHUD_C.ExecuteUbergraph_ChatHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatHUD_C::ExecuteUbergraph_ChatHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatHUD.ChatHUD_C.ExecuteUbergraph_ChatHUD");
		
		UChatHUD_C_ExecuteUbergraph_ChatHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatHUD.ChatHUD_C");
		return ptr;
	}

}


