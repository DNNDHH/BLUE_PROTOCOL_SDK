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
	 * 		Name   -> Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.CheckEventMapChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapBGConfigTableRow                      InMapBGConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UIMapBlueprintFunctionLibrary_C::CheckEventMapChange(const struct FSBMapBGConfigTableRow& InMapBGConfig, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.CheckEventMapChange");
		
		UBP_UIMapBlueprintFunctionLibrary_C_CheckEventMapChange_Params params {};
		params.InMapBGConfig = InMapBGConfig;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsPublicDungeonDirectWarp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBLocationInfoType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LocationId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIMapBlueprintFunctionLibrary_C::IsPublicDungeonDirectWarp(ESBLocationInfoType Type, const class FName& LocationId, class UObject* __WorldContext, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsPublicDungeonDirectWarp");
		
		UBP_UIMapBlueprintFunctionLibrary_C_IsPublicDungeonDirectWarp_Params params {};
		params.Type = Type;
		params.LocationId = LocationId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsEnableFieldStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InFieldStatusDataTable                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIMapBlueprintFunctionLibrary_C::IsEnableFieldStatus(const struct FDataTableRowHandle& InFieldStatusDataTable, class UObject* __WorldContext, bool* IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsEnableFieldStatus");
		
		UBP_UIMapBlueprintFunctionLibrary_C_IsEnableFieldStatus_Params params {};
		params.InFieldStatusDataTable = InFieldStatusDataTable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnable != nullptr)
			*IsEnable = params.IsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsViewHUDQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UIMapBlueprintFunctionLibrary_C::IsViewHUDQuest(int32_t QuestIndex, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C.IsViewHUDQuest");
		
		UBP_UIMapBlueprintFunctionLibrary_C_IsViewHUDQuest_Params params {};
		params.QuestIndex = QuestIndex;
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
	 * 		Name   -> PredefinedFunction UBP_UIMapBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UIMapBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C");
		return ptr;
	}

}


