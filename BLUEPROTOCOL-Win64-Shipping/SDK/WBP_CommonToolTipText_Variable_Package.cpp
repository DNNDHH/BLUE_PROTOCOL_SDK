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
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetCommunicationSettingMenuAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetCommunicationSettingMenuAchievement");
		
		UWBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetAdventureBoardBosstDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InLimited                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetAdventureBoardBosstDateTime(bool InLimited, const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetAdventureBoardBosstDateTime");
		
		UWBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime_Params params {};
		params.InLimited = InLimited;
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetRecipeDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetRecipeDateTime(const struct FDateTime& DateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetRecipeDateTime");
		
		UWBP_CommonToolTipText_Variable_C_SetRecipeDateTime_Params params {};
		params.DateTime = DateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetWeaponSkin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponSkinId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsTermLimited                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDateTime                                   InExpiryDateTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetWeaponSkin(int32_t InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetWeaponSkin");
		
		UWBP_CommonToolTipText_Variable_C_SetWeaponSkin_Params params {};
		params.InWeaponSkinId = InWeaponSkinId;
		params.InIsTermLimited = InIsTermLimited;
		params.InExpiryDateTime = InExpiryDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.Set Emotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetEmotion(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.Set Emotion");
		
		UWBP_CommonToolTipText_Variable_C_SetEmotion_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetText");
		
		UWBP_CommonToolTipText_Variable_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetTextAndDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FDateTime                                   DateTime                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHideIfMinValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetTextAndDateTime(const class FText& Text, const struct FDateTime& DateTime, bool bHideIfMinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetTextAndDateTime");
		
		UWBP_CommonToolTipText_Variable_C_SetTextAndDateTime_Params params {};
		params.Text = Text;
		params.DateTime = DateTime;
		params.bHideIfMinValue = bHideIfMinValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetLimitTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::SetLimitTimer(const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetLimitTimer");
		
		UWBP_CommonToolTipText_Variable_C_SetLimitTimer_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.ExecuteUbergraph_WBP_CommonToolTipText_Variable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonToolTipText_Variable_C::ExecuteUbergraph_WBP_CommonToolTipText_Variable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.ExecuteUbergraph_WBP_CommonToolTipText_Variable");
		
		UWBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommonToolTipText_Variable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommonToolTipText_Variable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C");
		return ptr;
	}

}


