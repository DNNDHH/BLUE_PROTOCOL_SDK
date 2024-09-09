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
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessageTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 LimitTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateColor                                 Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessageTextColor");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetMessageTextColor_Params params {};
		params.LimitTime = LimitTime;
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetMessage(ESBRewardItemType RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessage");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetMessage_Params params {};
		params.RewardType = RewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDurationMinutes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetDurationMinutes(int32_t DurationMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDurationMinutes");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetDurationMinutes_Params params {};
		params.DurationMinutes = DurationMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetEventTermId(const class FString& EventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermId");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetEventTermId_Params params {};
		params.EventTermId = EventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetData(const class FString& EventTermId, int32_t DurationMinutes, ESBRewardItemType RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetData");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetData_Params params {};
		params.EventTermId = EventTermId;
		params.DurationMinutes = DurationMinutes;
		params.RewardType = RewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetExpiryDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   ExpiryDateTime                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetExpiryDateTime");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetExpiryDateTime_Params params {};
		params.ExpiryDateTime = ExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDataAndVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventTermId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DurationMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetDataAndVisibility(const class FString& EventTermId, int32_t DurationMinutes, ESBRewardItemType RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDataAndVisibility");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetDataAndVisibility_Params params {};
		params.EventTermId = EventTermId;
		params.DurationMinutes = DurationMinutes;
		params.RewardType = RewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.PreConstruct");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermIdForAestheFreePass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEventTermId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::SetEventTermIdForAestheFreePass(const class FString& InEventTermId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermIdForAestheFreePass");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_SetEventTermIdForAestheFreePass_Params params {};
		params.InEventTermId = InEventTermId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsExpiryDateTime_C::ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime");
		
		UWBP_ShopMenuDetailsExpiryDateTime_C_ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ShopMenuDetailsExpiryDateTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ShopMenuDetailsExpiryDateTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C");
		return ptr;
	}

}


