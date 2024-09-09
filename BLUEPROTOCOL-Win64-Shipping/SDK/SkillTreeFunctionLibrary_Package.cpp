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
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.Get Base Skill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBSkillDataMasterData>              List                                                       (Parm, OutParm)
	 */
	void USkillTreeFunctionLibrary_C::GetBaseSkill(class UObject* __WorldContext, TArray<struct FSBSkillDataMasterData>* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.Get Base Skill");
		
		USkillTreeFunctionLibrary_C_GetBaseSkill_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (List != nullptr)
			*List = params.List;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillAbillityTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillAbilityType                                InAbilityType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USkillTreeFunctionLibrary_C::GetSkillAbillityTypeText(ESBSkillAbilityType InAbilityType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillAbillityTypeText");
		
		USkillTreeFunctionLibrary_C_GetSkillAbillityTypeText_Params params {};
		params.InAbilityType = InAbilityType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTreeFunctionLibrary_C::TryGetSkillImage(int32_t SkillId, int32_t SkillLV, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillImage");
		
		USkillTreeFunctionLibrary_C_TryGetSkillImage_Params params {};
		params.SkillId = SkillId;
		params.SkillLV = SkillLV;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText USkillTreeFunctionLibrary_C::GetSkillLevelText(int32_t Level, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelText");
		
		USkillTreeFunctionLibrary_C_GetSkillLevelText_Params params {};
		params.Level = Level;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillMovieID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        MovieID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTreeFunctionLibrary_C::TryGetSkillMovieID(int32_t SkillId, int32_t SkillLV, class UObject* __WorldContext, bool* Result, class FName* MovieID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillMovieID");
		
		USkillTreeFunctionLibrary_C_TryGetSkillMovieID_Params params {};
		params.SkillId = SkillId;
		params.SkillLV = SkillLV;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (MovieID != nullptr)
			*MovieID = params.MovieID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelUpOrLearnUnableMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void USkillTreeFunctionLibrary_C::GetSkillLevelUpOrLearnUnableMessage(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Index, class UObject* __WorldContext, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelUpOrLearnUnableMessage");
		
		USkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage_Params params {};
		params.Index = Index;
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
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetDerivedSkillIdArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    DerivedSkillArray                                          (Parm, OutParm)
	 */
	void USkillTreeFunctionLibrary_C::GetDerivedSkillIdArray(int32_t SkillId, class UObject* __WorldContext, TArray<int32_t>* DerivedSkillArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetDerivedSkillIdArray");
		
		USkillTreeFunctionLibrary_C_GetDerivedSkillIdArray_Params params {};
		params.SkillId = SkillId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DerivedSkillArray != nullptr)
			*DerivedSkillArray = params.DerivedSkillArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTreeFunctionLibrary_C::IsEnableConditionSkill(int32_t SkillId, class UObject* __WorldContext, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionSkill");
		
		USkillTreeFunctionLibrary_C_IsEnableConditionSkill_Params params {};
		params.SkillId = SkillId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               enable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTreeFunctionLibrary_C::IsEnableConditionClassLevel(int32_t SkillId, int32_t SkillLevel, class UObject* __WorldContext, bool* enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionClassLevel");
		
		USkillTreeFunctionLibrary_C_IsEnableConditionClassLevel_Params params {};
		params.SkillId = SkillId;
		params.SkillLevel = SkillLevel;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (enable != nullptr)
			*enable = params.enable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTreeFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTreeFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C");
		return ptr;
	}

}


