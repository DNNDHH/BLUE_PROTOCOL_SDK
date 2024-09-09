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
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESendLikeError                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileLikeBtn_C::SetButtonType(ESendLikeError Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonType");
		
		UPlayerProfileLikeBtn_C_SetButtonType_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfileLikeBtn_C::SetButtonEnable(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonEnable");
		
		UPlayerProfileLikeBtn_C_SetButtonEnable_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSendLIke                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OnlineStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PSOnlyDiff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UPlayerProfileLikeBtn_C::SetData(bool IsSendLIke, int32_t OnlineStatus, bool PSOnlyDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetData");
		
		UPlayerProfileLikeBtn_C_SetData_Params params {};
		params.IsSendLIke = IsSendLIke;
		params.OnlineStatus = OnlineStatus;
		params.PSOnlyDiff = PSOnlyDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileLikeBtn_C::BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerProfileLikeBtn_C_BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SendLike
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLikeSend>                           SendLikeList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPlayerProfileLikeBtn_C::SendLike(TArray<struct FLikeSend> SendLikeList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SendLike");
		
		UPlayerProfileLikeBtn_C_SendLike_Params params {};
		params.SendLikeList = SendLikeList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.OnSendLikeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Warning                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileLikeBtn_C::OnSendLikeEvent(bool bWasSuccessful, int32_t RetCode, int32_t Warning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.OnSendLikeEvent");
		
		UPlayerProfileLikeBtn_C_OnSendLikeEvent_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.RetCode = RetCode;
		params.Warning = Warning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonErrorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWarning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSystemMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfileLikeBtn_C::SetButtonErrorType(int32_t InWarning, bool InIsSystemMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.SetButtonErrorType");
		
		UPlayerProfileLikeBtn_C_SetButtonErrorType_Params params {};
		params.InWarning = InWarning;
		params.InIsSystemMessage = InIsSystemMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.ExecuteUbergraph_PlayerProfileLikeBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileLikeBtn_C::ExecuteUbergraph_PlayerProfileLikeBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.ExecuteUbergraph_PlayerProfileLikeBtn");
		
		UPlayerProfileLikeBtn_C_ExecuteUbergraph_PlayerProfileLikeBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BtnEventComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerProfileLikeBtn_C::BtnEventComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileLikeBtn.PlayerProfileLikeBtn_C.BtnEventComplete__DelegateSignature");
		
		UPlayerProfileLikeBtn_C_BtnEventComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfileLikeBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfileLikeBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerProfileLikeBtn.PlayerProfileLikeBtn_C");
		return ptr;
	}

}


