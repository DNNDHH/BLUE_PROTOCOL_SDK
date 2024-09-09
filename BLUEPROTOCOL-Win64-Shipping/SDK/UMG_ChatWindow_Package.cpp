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
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.RequestAPICheckOnlineStatus
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::RequestAPICheckOnlineStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.RequestAPICheckOnlineStatus");
		
		UUMG_ChatWindow_C_RequestAPICheckOnlineStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Open Server Reconnection Notice Tool Tip Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOpen                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::OpenServerReconnectionNoticeToolTipWidget(bool bOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Open Server Reconnection Notice Tool Tip Widget");
		
		UUMG_ChatWindow_C_OpenServerReconnectionNoticeToolTipWidget_Params params {};
		params.bOpen = bOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetServerReconnectionMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OnServerReconnection                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::SetServerReconnectionMode(bool OnServerReconnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetServerReconnectionMode");
		
		UUMG_ChatWindow_C_SetServerReconnectionMode_Params params {};
		params.OnServerReconnection = OnServerReconnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.GetChatType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ChatWindowChatType                               ChatType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::GetChatType(E_ChatWindowChatType* ChatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.GetChatType");
		
		UUMG_ChatWindow_C_GetChatType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChatType != nullptr)
			*ChatType = params.ChatType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.CheckChatModeIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     ChatType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::CheckChatModeIsValid(ESBChatLogType ChatType, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.CheckChatModeIsValid");
		
		UUMG_ChatWindow_C_CheckChatModeIsValid_Params params {};
		params.ChatType = ChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.IsTextInputFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Resurl                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::IsTextInputFocus(bool* Resurl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.IsTextInputFocus");
		
		UUMG_ChatWindow_C_IsTextInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Resurl != nullptr)
			*Resurl = params.Resurl;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.IsVisibleChatType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::IsVisibleChatType(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.IsVisibleChatType");
		
		UUMG_ChatWindow_C_IsVisibleChatType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SpecialCommandProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InChatMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      OutChatMessage                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBChatLogType                                     ChatLogType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SpecialCommandProcess(const class FString& InChatMessage, class FString* OutChatMessage, ESBChatLogType* ChatLogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SpecialCommandProcess");
		
		UUMG_ChatWindow_C_SpecialCommandProcess_Params params {};
		params.InChatMessage = InChatMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutChatMessage != nullptr)
			*OutChatMessage = params.OutChatMessage;
		if (ChatLogType != nullptr)
			*ChatLogType = params.ChatLogType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     logType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SetIcon(ESBChatLogType logType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetIcon");
		
		UUMG_ChatWindow_C_SetIcon_Params params {};
		params.logType = logType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ChatWindowChatType                               InChatType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SetChatType(E_ChatWindowChatType InChatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatType");
		
		UUMG_ChatWindow_C_SetChatType_Params params {};
		params.InChatType = InChatType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.LoadChatSendData
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::LoadChatSendData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.LoadChatSendData");
		
		UUMG_ChatWindow_C_LoadChatSendData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SaveChatSendData
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::SaveChatSendData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SaveChatSendData");
		
		UUMG_ChatWindow_C_SaveChatSendData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetTeamParameter
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::SetTeamParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetTeamParameter");
		
		UUMG_ChatWindow_C_SetTeamParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SetDirectChatParameter(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatParameter");
		
		UUMG_ChatWindow_C_SetDirectChatParameter_Params params {};
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
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.ShowErrorDirectChatSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextIdx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::ShowErrorDirectChatSearch(int32_t TextIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.ShowErrorDirectChatSearch");
		
		UUMG_ChatWindow_C_ShowErrorDirectChatSearch_Params params {};
		params.TextIdx = TextIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.GetPlayerSearchList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_ChatWindow_C::GetPlayerSearchList(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.GetPlayerSearchList");
		
		UUMG_ChatWindow_C_GetPlayerSearchList_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.UpdatePartyIcon
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::UpdatePartyIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.UpdatePartyIcon");
		
		UUMG_ChatWindow_C_UpdatePartyIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.UpdateDirectChatLogButton
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::UpdateDirectChatLogButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.UpdateDirectChatLogButton");
		
		UUMG_ChatWindow_C_UpdateDirectChatLogButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SetChatMode(ESBChatLogType NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatMode");
		
		UUMG_ChatWindow_C_SetChatMode_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Hide
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Hide");
		
		UUMG_ChatWindow_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Show
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Show");
		
		UUMG_ChatWindow_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SendChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBChatLogType                                     ChatLogType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SendChatMessage(const class FString& Message, ESBChatLogType ChatLogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SendChatMessage");
		
		UUMG_ChatWindow_C_SendChatMessage_Params params {};
		params.Message = Message;
		params.ChatLogType = ChatLogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature");
		
		UUMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnEventTypeSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     SelectedType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnEventTypeSelected(ESBChatLogType SelectedType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnEventTypeSelected");
		
		UUMG_ChatWindow_C_OnEventTypeSelected_Params params {};
		params.SelectedType = SelectedType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               SearchShortID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::SetDirectChatMode(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, bool SearchShortID, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatMode");
		
		UUMG_ChatWindow_C_SetDirectChatMode_Params params {};
		params.PlayerId = PlayerId;
		params.Name = Name;
		params.CharacterId = CharacterId;
		params.SearchShortID = SearchShortID;
		params.PrivilegeType = PrivilegeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OpenChatType
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::OpenChatType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OpenChatType");
		
		UUMG_ChatWindow_C_OpenChatType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.CloseChatType
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::CloseChatType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.CloseChatType");
		
		UUMG_ChatWindow_C_CloseChatType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Construct");
		
		UUMG_ChatWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetUserFocusAtITextInput
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::SetUserFocusAtITextInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetUserFocusAtITextInput");
		
		UUMG_ChatWindow_C_SetUserFocusAtITextInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnPress_EndChat
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::OnPress_EndChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnPress_EndChat");
		
		UUMG_ChatWindow_C_OnPress_EndChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnAnimationFinished");
		
		UUMG_ChatWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnEnterClose
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::OnEnterClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnEnterClose");
		
		UUMG_ChatWindow_C_OnEnterClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Destruct");
		
		UUMG_ChatWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnGetPlayerProfileDetailMenuDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      shortId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnGetPlayerProfileDetailMenuDelegate_Event(bool bWasSuccessful, const class FString& shortId, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnGetPlayerProfileDetailMenuDelegate_Event");
		
		UUMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.shortId = shortId;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Init
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Init");
		
		UUMG_ChatWindow_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Errorr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatSendErrorType                               ErrorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::Errorr(ESBChatSendErrorType ErrorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Errorr");
		
		UUMG_ChatWindow_C_Errorr_Params params {};
		params.ErrorType = ErrorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UUMG_ChatWindow_C_BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_ChatWindow_C_BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_ChatWindow_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_ChatWindow_C_BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.SetInputFocus
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::SetInputFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.SetInputFocus");
		
		UUMG_ChatWindow_C_SetInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.PreConstruct");
		
		UUMG_ChatWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnChanged_ConnectionChatServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLogin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ChatWindow_C::OnChanged_ConnectionChatServer(bool IsLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnChanged_ConnectionChatServer");
		
		UUMG_ChatWindow_C_OnChanged_ConnectionChatServer_Params params {};
		params.IsLogin = IsLogin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.RemoveDirectChatSenderLogs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::RemoveDirectChatSenderLogs(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.RemoveDirectChatSenderLogs");
		
		UUMG_ChatWindow_C_RemoveDirectChatSenderLogs_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnNotificationBlackListedDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBlackListed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      SenderId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnNotificationBlackListedDelegate_Event");
		
		UUMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event_Params params {};
		params.bBlackListed = bBlackListed;
		params.SenderId = SenderId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.Unbind
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.Unbind");
		
		UUMG_ChatWindow_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnDirectChatSenderRemoveDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnDirectChatSenderRemoveDelegate_Event(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnDirectChatSenderRemoveDelegate_Event");
		
		UUMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnIsGetPlayerSearchListDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FPlayerProfileSummaryData>           PlayerSearchListData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsOver                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnIsGetPlayerSearchListDelegate_Event(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData> PlayerSearchListData, bool bIsOver, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnIsGetPlayerSearchListDelegate_Event");
		
		UUMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerSearchListData = PlayerSearchListData;
		params.bIsOver = bIsOver;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.ExecuteUbergraph_UMG_ChatWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::ExecuteUbergraph_UMG_ChatWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.ExecuteUbergraph_UMG_ChatWindow");
		
		UUMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnChangeChatMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::OnChangeChatMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnChangeChatMode__DelegateSignature");
		
		UUMG_ChatWindow_C_OnChangeChatMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnRemoveDirectChatWindow__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnRemoveDirectChatWindow__DelegateSignature(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnRemoveDirectChatWindow__DelegateSignature");
		
		UUMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnAddDirectChatWindow__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_ChatWindow_C::OnAddDirectChatWindow__DelegateSignature(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnAddDirectChatWindow__DelegateSignature");
		
		UUMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature_Params params {};
		params.PlayerId = PlayerId;
		params.Name = Name;
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ChatWindow.UMG_ChatWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ChatWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ChatWindow.UMG_ChatWindow_C.OnClose__DelegateSignature");
		
		UUMG_ChatWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_ChatWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_ChatWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ChatWindow.UMG_ChatWindow_C");
		return ptr;
	}

}


