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
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get_ListButton_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_VisitedMapList2Item_C::Get_ListButton_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get_ListButton_ToolTipWidget_1");
		
		UMapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get Map Zone String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2Item_C::GetMapZoneString(int32_t Index, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get Map Zone String");
		
		UMapWidget_VisitedMapList2Item_C_GetMapZoneString_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ChangeFaceIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2Item_C::ChangeFaceIconTexture(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ChangeFaceIconTexture");
		
		UMapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InCurrentMap                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_VisitedMapList2Item_C::Setup(const class FString& InMapId, bool InCurrentMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Setup");
		
		UMapWidget_VisitedMapList2Item_C_Setup_Params params {};
		params.InMapId = InMapId;
		params.InCurrentMap = InCurrentMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2Item_C::BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_VisitedMapList2Item_C_BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ExecuteUbergraph_MapWidget_VisitedMapList2Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2Item_C::ExecuteUbergraph_MapWidget_VisitedMapList2Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ExecuteUbergraph_MapWidget_VisitedMapList2Item");
		
		UMapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2Item_C::OnClicked__DelegateSignature(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.OnClicked__DelegateSignature");
		
		UMapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_VisitedMapList2Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_VisitedMapList2Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C");
		return ptr;
	}

}


