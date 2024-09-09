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
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.SetToolTips
	 * 		Flags  -> ()
	 */
	void UMailList_attachment_C::SetToolTips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.SetToolTips");
		
		UMailList_attachment_C_SetToolTips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.UpdateStorageIcon
	 * 		Flags  -> ()
	 */
	void UMailList_attachment_C::UpdateStorageIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.UpdateStorageIcon");
		
		UMailList_attachment_C_UpdateStorageIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.UpdateIconExtraData
	 * 		Flags  -> ()
	 */
	void UMailList_attachment_C::UpdateIconExtraData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.UpdateIconExtraData");
		
		UMailList_attachment_C_UpdateIconExtraData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.SetAttentionStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailList_attachment_C::SetAttentionStatus(int32_t Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.SetAttentionStatus");
		
		UMailList_attachment_C_SetAttentionStatus_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.SetViewType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBMailAttachmentViewType                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailList_attachment_C::SetViewType(ESBMailAttachmentViewType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.SetViewType");
		
		UMailList_attachment_C_SetViewType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.SetMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailList_attachment_C::SetMoney(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.SetMoney");
		
		UMailList_attachment_C_SetMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.Construct
	 * 		Flags  -> ()
	 */
	void UMailList_attachment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.Construct");
		
		UMailList_attachment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailList_attachment.MailList_attachment_C.ExecuteUbergraph_MailList_attachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailList_attachment_C::ExecuteUbergraph_MailList_attachment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailList_attachment.MailList_attachment_C.ExecuteUbergraph_MailList_attachment");
		
		UMailList_attachment_C_ExecuteUbergraph_MailList_attachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailList_attachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailList_attachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailList_attachment.MailList_attachment_C");
		return ptr;
	}

}


