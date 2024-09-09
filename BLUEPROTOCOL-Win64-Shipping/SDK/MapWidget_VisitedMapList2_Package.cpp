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
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.GetViewCount
	 * 		Flags  -> ()
	 */
	int32_t UMapWidget_VisitedMapList2_C::GetViewCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.GetViewCount");
		
		UMapWidget_VisitedMapList2_C_GetViewCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ChangeFaceImageTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::ChangeFaceImageTexture(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ChangeFaceImageTexture");
		
		UMapWidget_VisitedMapList2_C_ChangeFaceImageTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.PageChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::PageChange(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.PageChange");
		
		UMapWidget_VisitedMapList2_C_PageChange_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InMapIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      InCurrentId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::Setup(TArray<class FString>* InMapIds, const class FString& InCurrentId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Setup");
		
		UMapWidget_VisitedMapList2_C_Setup_Params params {};
		params.InCurrentId = InCurrentId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMapIds != nullptr)
			*InMapIds = params.InMapIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ResetListItem
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::ResetListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ResetListItem");
		
		UMapWidget_VisitedMapList2_C_ResetListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.SetupListItem
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::SetupListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.SetupListItem");
		
		UMapWidget_VisitedMapList2_C_SetupListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Close
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Close");
		
		UMapWidget_VisitedMapList2_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Open
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Open");
		
		UMapWidget_VisitedMapList2_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BindListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_VisitedMapList2Item_C*            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::BindListItem(class UMapWidget_VisitedMapList2Item_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BindListItem");
		
		UMapWidget_VisitedMapList2_C_BindListItem_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.UnbindListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_VisitedMapList2Item_C*            Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::UnbindListItem(class UMapWidget_VisitedMapList2Item_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.UnbindListItem");
		
		UMapWidget_VisitedMapList2_C_UnbindListItem_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::OnListItemClickedEvent(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClickedEvent");
		
		UMapWidget_VisitedMapList2_C_OnListItemClickedEvent_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Destruct");
		
		UMapWidget_VisitedMapList2_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnPress_Cancel");
		
		UMapWidget_VisitedMapList2_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnAnimationFinished");
		
		UMapWidget_VisitedMapList2_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature");
		
		UMapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params params {};
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Construct");
		
		UMapWidget_VisitedMapList2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ExecuteUbergraph_MapWidget_VisitedMapList2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::ExecuteUbergraph_MapWidget_VisitedMapList2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ExecuteUbergraph_MapWidget_VisitedMapList2");
		
		UMapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_VisitedMapList2_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnClose__DelegateSignature");
		
		UMapWidget_VisitedMapList2_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InMapId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_VisitedMapList2_C::OnListItemClicked__DelegateSignature(const class FString& InMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClicked__DelegateSignature");
		
		UMapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature_Params params {};
		params.InMapId = InMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_VisitedMapList2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_VisitedMapList2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C");
		return ptr;
	}

}


