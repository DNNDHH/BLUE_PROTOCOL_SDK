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
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Get Attribute Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ULibraryMenu_Monster_ExplainTabMenu_C::GetAttributeText(int32_t inInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Get Attribute Text");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_GetAttributeText_Params params {};
		params.inInt = inInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyDataFromId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EnemyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_ExplainTabMenu_C::ChangeEnemyDataFromId(const class FName& EnemyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyDataFromId");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId_Params params {};
		params.EnemyId = EnemyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Set Info Tooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      TargetIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_CommonToolTipDetail_Variable_C*         TipWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            totalCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NowCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_ExplainTabMenu_C::SetInfoTooltip(class UImage* TargetIcon, class UWBP_CommonToolTipDetail_Variable_C** TipWidget, int32_t totalCount, int32_t NowCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Set Info Tooltip");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_SetInfoTooltip_Params params {};
		params.TargetIcon = TargetIcon;
		params.totalCount = totalCount;
		params.NowCount = NowCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TipWidget != nullptr)
			*TipWidget = params.TipWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.UpdateDetailOpenSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CheckType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_ExplainTabMenu_C::UpdateDetailOpenSetting(const class FName& CheckType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.UpdateDetailOpenSetting");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting_Params params {};
		params.CheckType = CheckType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_ExplainTabMenu_C::ChangeEnemyData(int32_t Index, int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyData");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData_Params params {};
		params.Index = Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.SetEnemyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLibraryEnemyData                         EnemyData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_Monster_ExplainTabMenu_C::SetEnemyData(const struct FSBLibraryEnemyData& EnemyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.SetEnemyData");
		
		ULibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData_Params params {};
		params.EnemyData = EnemyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_ExplainTabMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_ExplainTabMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C");
		return ptr;
	}

}


