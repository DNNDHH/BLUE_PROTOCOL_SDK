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
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.GetContentActivateMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ContentId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Message                                                    (Parm, OutParm)
	 */
	bool UBP_SystemMessageManager_C::GetContentActivateMessage(TArray<class FName> ContentId, class FText* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.GetContentActivateMessage");
		
		UBP_SystemMessageManager_C_GetContentActivateMessage_Params params {};
		params.ContentId = ContentId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.IsSystemMessageShowingOrStandby
	 * 		Flags  -> ()
	 */
	bool UBP_SystemMessageManager_C::IsSystemMessageShowingOrStandby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.IsSystemMessageShowingOrStandby");
		
		UBP_SystemMessageManager_C_IsSystemMessageShowingOrStandby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowGetEmoteMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        EmoteId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SystemMessageManager_C::ShowGetEmoteMessage(class UObject* WorldContextObject, const class FName& EmoteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowGetEmoteMessage");
		
		UBP_SystemMessageManager_C_ShowGetEmoteMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.EmoteId = EmoteId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.EndMessage
	 * 		Flags  -> ()
	 */
	void UBP_SystemMessageManager_C::EndMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.EndMessage");
		
		UBP_SystemMessageManager_C_EndMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsLowerPosition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDoNotSkip                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SystemMessageManager_C::ShowMessage(class UObject* WorldContextObject, const class FText& Message, bool IsLowerPosition, bool bDoNotSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowMessage");
		
		UBP_SystemMessageManager_C_ShowMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Message = Message;
		params.IsLowerPosition = IsLowerPosition;
		params.bDoNotSkip = bDoNotSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.ClearSystemMessage
	 * 		Flags  -> ()
	 */
	void UBP_SystemMessageManager_C::ClearSystemMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.ClearSystemMessage");
		
		UBP_SystemMessageManager_C_ClearSystemMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.CreateSysMsg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSystemMessageRequestData                   ReqData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBP_SystemMessageManager_C::CreateSysMsg(const struct FSystemMessageRequestData& ReqData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.CreateSysMsg");
		
		UBP_SystemMessageManager_C_CreateSysMsg_Params params {};
		params.ReqData = ReqData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.OnEndMessage_イベント
	 * 		Flags  -> ()
	 */
	void UBP_SystemMessageManager_C::OnEndMessage_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.OnEndMessage_イベント");
		
		UBP_SystemMessageManager_C_OnEndMessage__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UBP_SystemMessageManager_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.CustomEvent_1");
		
		UBP_SystemMessageManager_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SystemMessageManager.BP_SystemMessageManager_C.ExecuteUbergraph_BP_SystemMessageManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SystemMessageManager_C::ExecuteUbergraph_BP_SystemMessageManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SystemMessageManager.BP_SystemMessageManager_C.ExecuteUbergraph_BP_SystemMessageManager");
		
		UBP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SystemMessageManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SystemMessageManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemMessageManager.BP_SystemMessageManager_C");
		return ptr;
	}

}


