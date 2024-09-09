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
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.CreateCustomMenuDialogYesNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FScriptDelegate                              EndDynamicDelegate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_Dialog_C*                                OutDialog                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::CreateCustomMenuDialogYesNo(const class FText& Message, const class FScriptDelegate& EndDynamicDelegate, class UObject* __WorldContext, class UBP_Dialog_C** OutDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.CreateCustomMenuDialogYesNo");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_CreateCustomMenuDialogYesNo_Params params {};
		params.Message = Message;
		params.EndDynamicDelegate = EndDynamicDelegate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDialog != nullptr)
			*OutDialog = params.OutDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.CreateCustomMenuDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_Dialog_C*                                OutDialog                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::CreateCustomMenuDialog(const class FText& Message, class UObject* __WorldContext, class UBP_Dialog_C** OutDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.CreateCustomMenuDialog");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_CreateCustomMenuDialog_Params params {};
		params.Message = Message;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDialog != nullptr)
			*OutDialog = params.OutDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetUseConfirmDialogText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectWeapon                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UBP_CustomMenuBlueprintFunctionLibrary_C::GetUseConfirmDialogText(const struct FOwnItemInfo& SelectWeapon, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetUseConfirmDialogText");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_GetUseConfirmDialogText_Params params {};
		params.SelectWeapon = SelectWeapon;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetAbilityEffectID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AbilityEffectId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::GetAbilityEffectID(int32_t ItemId, class UObject* __WorldContext, int32_t* AbilityEffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetAbilityEffectID");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_GetAbilityEffectID_Params params {};
		params.ItemId = ItemId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbilityEffectId != nullptr)
			*AbilityEffectId = params.AbilityEffectId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetAbilityEffectValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbilityEffectId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Perk1ValueMin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Perk1ValueMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Perk2ValueMin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Perk2ValueMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RarityMin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RarityMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::GetAbilityEffectValue(int32_t AbilityEffectId, class UObject* __WorldContext, int32_t* Perk1ValueMin, int32_t* Perk1ValueMax, int32_t* Perk2ValueMin, int32_t* Perk2ValueMax, int32_t* RarityMin, int32_t* RarityMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.GetAbilityEffectValue");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_GetAbilityEffectValue_Params params {};
		params.AbilityEffectId = AbilityEffectId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Perk1ValueMin != nullptr)
			*Perk1ValueMin = params.Perk1ValueMin;
		if (Perk1ValueMax != nullptr)
			*Perk1ValueMax = params.Perk1ValueMax;
		if (Perk2ValueMin != nullptr)
			*Perk2ValueMin = params.Perk2ValueMin;
		if (Perk2ValueMax != nullptr)
			*Perk2ValueMax = params.Perk2ValueMax;
		if (RarityMin != nullptr)
			*RarityMin = params.RarityMin;
		if (RarityMax != nullptr)
			*RarityMax = params.RarityMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsSameAbilityEffectValueAbilityEffectID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbilityEffectId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::IsSameAbilityEffectValueAbilityEffectID(int32_t AbilityEffectId, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsSameAbilityEffectValueAbilityEffectID");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID_Params params {};
		params.AbilityEffectId = AbilityEffectId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsSameAbilityEffectValueMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::IsSameAbilityEffectValueMinMax(int32_t ValueMin, int32_t ValueMax, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsSameAbilityEffectValueMinMax");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax_Params params {};
		params.ValueMin = ValueMin;
		params.ValueMax = ValueMax;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueAbilityEffectID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AbilityEffectId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValueAbilityEffectID(int32_t AbilityEffectId, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueAbilityEffectID");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID_Params params {};
		params.AbilityEffectId = AbilityEffectId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValueMinMax(int32_t ValueMin, int32_t ValueMax, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueMinMax");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax_Params params {};
		params.ValueMin = ValueMin;
		params.ValueMax = ValueMax;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_CustomMenuBlueprintFunctionLibrary_C::IsInvalidAbilityEffectValue(int32_t Value, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValue");
		
		UBP_CustomMenuBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue_Params params {};
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CustomMenuBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CustomMenuBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C");
		return ptr;
	}

}


