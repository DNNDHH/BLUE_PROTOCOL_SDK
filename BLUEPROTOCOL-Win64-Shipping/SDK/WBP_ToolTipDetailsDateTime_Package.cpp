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
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetCommunicationSettingMenuAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetCommunicationSettingMenuAchievement");
		
		UWBP_ToolTipDetailsDateTime_C_SetCommunicationSettingMenuAchievement_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetRecepiType
	 * 		Flags  -> ()
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetRecepiType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetRecepiType");
		
		UWBP_ToolTipDetailsDateTime_C_SetRecepiType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEndDisplay
	 * 		Flags  -> ()
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetEndDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEndDisplay");
		
		UWBP_ToolTipDetailsDateTime_C_SetEndDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SwitchingRecipeHeader
	 * 		Flags  -> ()
	 */
	void UWBP_ToolTipDetailsDateTime_C::SwitchingRecipeHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SwitchingRecipeHeader");
		
		UWBP_ToolTipDetailsDateTime_C_SwitchingRecipeHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetLimitTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetLimitTimer(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetLimitTimer");
		
		UWBP_ToolTipDetailsDateTime_C_SetLimitTimer_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessageTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 LimitTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessageTextColor");
		
		UWBP_ToolTipDetailsDateTime_C_SetMessageTextColor_Params params {};
		params.LimitTime = LimitTime;
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          InItemType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetMessage(EItemType InItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessage");
		
		UWBP_ToolTipDetailsDateTime_C_SetMessage_Params params {};
		params.InItemType = InItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDurationMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetDurationMinutes(int32_t DurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDurationMinutes");
		
		UWBP_ToolTipDetailsDateTime_C_SetDurationMinutes_Params params {};
		params.DurationMinutes = DurationMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEventTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetEventTermId(const class FString& EventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEventTermId");
		
		UWBP_ToolTipDetailsDateTime_C_SetEventTermId_Params params {};
		params.EventTermId = EventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetData(const class FString& EventTermId, int32_t DurationMinutes, EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetData");
		
		UWBP_ToolTipDetailsDateTime_C_SetData_Params params {};
		params.EventTermId = EventTermId;
		params.DurationMinutes = DurationMinutes;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   ExpiryDateTime                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTime");
		
		UWBP_ToolTipDetailsDateTime_C_SetExpiryDateTime_Params params {};
		params.ExpiryDateTime = ExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDataAndVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetDataAndVisibility(const class FString& EventTermId, int32_t DurationMinutes, EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDataAndVisibility");
		
		UWBP_ToolTipDetailsDateTime_C_SetDataAndVisibility_Params params {};
		params.EventTermId = EventTermId;
		params.DurationMinutes = DurationMinutes;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ToolTipDetailsDateTime_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.PreConstruct");
		
		UWBP_ToolTipDetailsDateTime_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTimeEndDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   ExpiryDateTime                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::SetExpiryDateTimeEndDisplay(const struct FDateTime& ExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTimeEndDisplay");
		
		UWBP_ToolTipDetailsDateTime_C_SetExpiryDateTimeEndDisplay_Params params {};
		params.ExpiryDateTime = ExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.ExecuteUbergraph_WBP_ToolTipDetailsDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ToolTipDetailsDateTime_C::ExecuteUbergraph_WBP_ToolTipDetailsDateTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.ExecuteUbergraph_WBP_ToolTipDetailsDateTime");
		
		UWBP_ToolTipDetailsDateTime_C_ExecuteUbergraph_WBP_ToolTipDetailsDateTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ToolTipDetailsDateTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ToolTipDetailsDateTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C");
		return ptr;
	}

}


