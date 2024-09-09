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
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseFreePassMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsCourseFreePass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketListItem_C::SetCourseFreePassMode(bool bInIsCourseFreePass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseFreePassMode");
		
		UAestheShop_TicketListItem_C_SetCourseFreePassMode_Params params {};
		params.bInIsCourseFreePass = bInIsCourseFreePass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetCourseId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutCourseId                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::GetCourseId(int32_t* OutCourseId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetCourseId");
		
		UAestheShop_TicketListItem_C_GetCourseId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCourseId != nullptr)
			*OutCourseId = params.OutCourseId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetHoldTicketTokenAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::GetHoldTicketTokenAmount(int32_t* OutAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetHoldTicketTokenAmount");
		
		UAestheShop_TicketListItem_C_GetHoldTicketTokenAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAmount != nullptr)
			*OutAmount = params.OutAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetTicketTokenId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutTIcketTokenId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::GetTicketTokenId(int32_t* OutTIcketTokenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetTicketTokenId");
		
		UAestheShop_TicketListItem_C_GetTicketTokenId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTIcketTokenId != nullptr)
			*OutTIcketTokenId = params.OutTIcketTokenId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetListItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketListItem_C::SetListItemSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetListItemSelected");
		
		UAestheShop_TicketListItem_C_SetListItemSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::SetTicketAmount(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketAmount");
		
		UAestheShop_TicketListItem_C_SetTicketAmount_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketListItem_C::SetTicketName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketName");
		
		UAestheShop_TicketListItem_C_SetTicketName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAestheShop_TicketListItem_C::SetCourseName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseName");
		
		UAestheShop_TicketListItem_C_SetCourseName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseIcon
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketListItem_C::SetCourseIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseIcon");
		
		UAestheShop_TicketListItem_C_SetCourseIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetupCourseListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHoldTicketTokenAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::SetupCourseListItem(int32_t InCourseId, int32_t InHoldTicketTokenAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetupCourseListItem");
		
		UAestheShop_TicketListItem_C_SetupCourseListItem_Params params {};
		params.InCourseId = InCourseId;
		params.InHoldTicketTokenAmount = InHoldTicketTokenAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.PreConstruct");
		
		UAestheShop_TicketListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.Construct");
		
		UAestheShop_TicketListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketListItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAestheShop_TicketListItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.ExecuteUbergraph_AestheShop_TicketListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::ExecuteUbergraph_AestheShop_TicketListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.ExecuteUbergraph_AestheShop_TicketListItem");
		
		UAestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHoldTicketTokenAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketListItem_C::OnSelected__DelegateSignature(int32_t InCourseId, int32_t InTicketTokenId, int32_t InHoldTicketTokenAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.OnSelected__DelegateSignature");
		
		UAestheShop_TicketListItem_C_OnSelected__DelegateSignature_Params params {};
		params.InCourseId = InCourseId;
		params.InTicketTokenId = InTicketTokenId;
		params.InHoldTicketTokenAmount = InHoldTicketTokenAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAestheShop_TicketListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAestheShop_TicketListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AestheShop_TicketListItem.AestheShop_TicketListItem_C");
		return ptr;
	}

}


