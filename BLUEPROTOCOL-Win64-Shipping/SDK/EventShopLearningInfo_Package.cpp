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
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextClassLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ClassLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ClassText                                                  (Parm, OutParm)
	 */
	void UEventShopLearningInfo_C::GetTextClassLevel(ESBClassType ClassType, int32_t ClassLevel, class FText* ClassText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextClassLevel");
		
		UEventShopLearningInfo_C_GetTextClassLevel_Params params {};
		params.ClassType = ClassType;
		params.ClassLevel = ClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClassText != nullptr)
			*ClassText = params.ClassText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextSkillConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ConditionSkillId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ConditionSkillLv                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Skill                                                      (Parm, OutParm)
	 */
	void UEventShopLearningInfo_C::GetTextSkillConditions(int32_t ConditionSkillId, int32_t ConditionSkillLv, class FText* Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextSkillConditions");
		
		UEventShopLearningInfo_C_GetTextSkillConditions_Params params {};
		params.ConditionSkillId = ConditionSkillId;
		params.ConditionSkillLv = ConditionSkillLv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skill != nullptr)
			*Skill = params.Skill;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.SetSkillId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Exchangeable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopLearningInfo_C::SetSkillId(int32_t SkillId, bool* Exchangeable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.SetSkillId");
		
		UEventShopLearningInfo_C_SetSkillId_Params params {};
		params.SkillId = SkillId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exchangeable != nullptr)
			*Exchangeable = params.Exchangeable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopLearningInfo_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseEnter");
		
		UEventShopLearningInfo_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopLearningInfo_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseLeave");
		
		UEventShopLearningInfo_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEventShopLearningInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.Destruct");
		
		UEventShopLearningInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopLearningInfo.EventShopLearningInfo_C.ExecuteUbergraph_EventShopLearningInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopLearningInfo_C::ExecuteUbergraph_EventShopLearningInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopLearningInfo.EventShopLearningInfo_C.ExecuteUbergraph_EventShopLearningInfo");
		
		UEventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopLearningInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopLearningInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopLearningInfo.EventShopLearningInfo_C");
		return ptr;
	}

}


