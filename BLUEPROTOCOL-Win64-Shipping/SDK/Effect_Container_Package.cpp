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
	 * 		Name   -> Function Effect_Container.Effect_Container_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Container_C::SetTitle(const class FName& InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.SetTitle");
		
		UEffect_Container_C_SetTitle_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.GetTooltipText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBWarehouseAbilityComponent*                WarehouseAbilityComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UEffect_Container_C::GetTooltipText(class USBWarehouseAbilityComponent* WarehouseAbilityComponent, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.GetTooltipText");
		
		UEffect_Container_C_GetTooltipText_Params params {};
		params.WarehouseAbilityComponent = WarehouseAbilityComponent;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecepiId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UEffect_Container_C::GetValue(int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.GetValue");
		
		UEffect_Container_C_GetValue_Params params {};
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.CreateEffectActiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWarehouseAbilityListUIInfo               SBWarehouseAbilityListUIInfo                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class USBWarehouseAbilityComponent*                WarehouseAbilityComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShowTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShowValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Container_C::CreateEffectActiveWidget(const struct FSBWarehouseAbilityListUIInfo& SBWarehouseAbilityListUIInfo, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.CreateEffectActiveWidget");
		
		UEffect_Container_C_CreateEffectActiveWidget_Params params {};
		params.SBWarehouseAbilityListUIInfo = SBWarehouseAbilityListUIInfo;
		params.WarehouseAbilityComponent = WarehouseAbilityComponent;
		params.IsShowTooltip = IsShowTooltip;
		params.IsShowValue = IsShowValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.SetEffectList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPioneerAbilityList                         PioneerAbilityList                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USBWarehouseAbilityComponent*                WarehouseAbilityComponent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShowTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsShowValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Container_C::SetEffectList(const class FName& MapId, const struct FPioneerAbilityList& PioneerAbilityList, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.SetEffectList");
		
		UEffect_Container_C_SetEffectList_Params params {};
		params.MapId = MapId;
		params.PioneerAbilityList = PioneerAbilityList;
		params.WarehouseAbilityComponent = WarehouseAbilityComponent;
		params.IsShowTooltip = IsShowTooltip;
		params.IsShowValue = IsShowValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEffect_Container_C::BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature(bool IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature");
		
		UEffect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Effect_Container.Effect_Container_C.ExecuteUbergraph_Effect_Container
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEffect_Container_C::ExecuteUbergraph_Effect_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Effect_Container.Effect_Container_C.ExecuteUbergraph_Effect_Container");
		
		UEffect_Container_C_ExecuteUbergraph_Effect_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEffect_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Effect_Container.Effect_Container_C");
		return ptr;
	}

}


