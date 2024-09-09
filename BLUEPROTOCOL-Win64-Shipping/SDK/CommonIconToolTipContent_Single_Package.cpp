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
	 * 		Name   -> Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Single_C::SetText(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetText");
		
		UCommonIconToolTipContent_Single_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetTypeOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Single_C::SetTypeOnly(ESBRewardItemType RewardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetTypeOnly");
		
		UCommonIconToolTipContent_Single_C_SetTypeOnly_Params params {};
		params.RewardType = RewardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Single_C::SetEmotion(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetEmotion");
		
		UCommonIconToolTipContent_Single_C_SetEmotion_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Single_C::SetAmount(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetAmount");
		
		UCommonIconToolTipContent_Single_C_SetAmount_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetBrokenData
	 * 		Flags  -> ()
	 */
	void UCommonIconToolTipContent_Single_C::SetBrokenData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetBrokenData");
		
		UCommonIconToolTipContent_Single_C_SetBrokenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_Single_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_Single_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C");
		return ptr;
	}

}


