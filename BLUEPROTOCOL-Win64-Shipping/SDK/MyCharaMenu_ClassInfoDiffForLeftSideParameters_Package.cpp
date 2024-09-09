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
	 * 		Name   -> Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.SetClassInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::SetClassInfo(ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.SetClassInfo");
		
		UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C_SetClassInfo_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.PreConstruct");
		
		UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters");
		
		UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C");
		return ptr;
	}

}


