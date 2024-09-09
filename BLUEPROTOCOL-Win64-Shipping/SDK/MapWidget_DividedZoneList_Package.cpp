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
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              InVisitedZoneIds                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMapWidget_DividedZoneList_C::Setup(const class FString& InMapId, TArray<class FString>* InVisitedZoneIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Setup");
		
		UMapWidget_DividedZoneList_C_Setup_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InVisitedZoneIds != nullptr)
			*InVisitedZoneIds = params.InVisitedZoneIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_DividedZoneList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.PreConstruct");
		
		UMapWidget_DividedZoneList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_DividedZoneList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Destruct");
		
		UMapWidget_DividedZoneList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_DividedZoneListItem_C*            InSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InDividedZoneId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_DividedZoneList_C::OnListItemClickedEvent(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClickedEvent");
		
		UMapWidget_DividedZoneList_C_OnListItemClickedEvent_Params params {};
		params.InSelf = InSelf;
		params.InDividedZoneId = InDividedZoneId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.ExecuteUbergraph_MapWidget_DividedZoneList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_DividedZoneList_C::ExecuteUbergraph_MapWidget_DividedZoneList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.ExecuteUbergraph_MapWidget_DividedZoneList");
		
		UMapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InDividedZoneId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_DividedZoneList_C::OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClicked__DelegateSignature");
		
		UMapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature_Params params {};
		params.InDividedZoneId = InDividedZoneId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_DividedZoneList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_DividedZoneList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_DividedZoneList.MapWidget_DividedZoneList_C");
		return ptr;
	}

}


