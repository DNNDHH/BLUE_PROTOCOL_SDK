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
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.IsAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Accept                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentAcceptHead_C::IsAccepted(bool* Accept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.IsAccepted");
		
		UMailAttachmentAcceptHead_C_IsAccepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Accept != nullptr)
			*Accept = params.Accept;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyDuplicate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Duplicate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentAcceptHead_C::isAnyDuplicate(bool* Duplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyDuplicate");
		
		UMailAttachmentAcceptHead_C_isAnyDuplicate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duplicate != nullptr)
			*Duplicate = params.Duplicate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyOverFlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Overflow                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentAcceptHead_C::isAnyOverFlow(bool* Overflow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyOverFlow");
		
		UMailAttachmentAcceptHead_C_isAnyOverFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overflow != nullptr)
			*Overflow = params.Overflow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.GenerateAttachmentList
	 * 		Flags  -> ()
	 */
	void UMailAttachmentAcceptHead_C::GenerateAttachmentList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.GenerateAttachmentList");
		
		UMailAttachmentAcceptHead_C_GenerateAttachmentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.FindAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailAttachment                           Find                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Attachment                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentAcceptHead_C::FindAttachments(const struct FSBMailAttachment& Find, int32_t* Attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.FindAttachments");
		
		UMailAttachmentAcceptHead_C_FindAttachments_Params params {};
		params.Find = Find;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachment != nullptr)
			*Attachment = params.Attachment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.Get Storage Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UMailAttachmentAcceptHead_C::GetStorageText(int32_t StorageNo, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.Get Storage Text");
		
		UMailAttachmentAcceptHead_C_GetStorageText_Params params {};
		params.StorageNo = StorageNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentAcceptHead_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.PreConstruct");
		
		UMailAttachmentAcceptHead_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.SetStorageNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentAcceptHead_C::SetStorageNo(int32_t StorageNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.SetStorageNo");
		
		UMailAttachmentAcceptHead_C_SetStorageNo_Params params {};
		params.StorageNo = StorageNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.AddAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailAttachment                           inAttachment                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailAttachmentAcceptHead_C::AddAttachment(const struct FSBMailAttachment& inAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.AddAttachment");
		
		UMailAttachmentAcceptHead_C_AddAttachment_Params params {};
		params.inAttachment = inAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailAttachmentAcceptHead_C::BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");
		
		UMailAttachmentAcceptHead_C_BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params params {};
		params.Area = Area;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.ExecuteUbergraph_MailAttachmentAcceptHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailAttachmentAcceptHead_C::ExecuteUbergraph_MailAttachmentAcceptHead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.ExecuteUbergraph_MailAttachmentAcceptHead");
		
		UMailAttachmentAcceptHead_C_ExecuteUbergraph_MailAttachmentAcceptHead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailAttachmentAcceptHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailAttachmentAcceptHead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailAttachmentAcceptHead.MailAttachmentAcceptHead_C");
		return ptr;
	}

}


