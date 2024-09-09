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
	 * 		Name   -> Function MiniMapLowerIcons.MiniMapLowerIcons_C.OnCreateWarpPointExIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMiniMapLowerIcons_C::OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapLowerIcons.MiniMapLowerIcons_C.OnCreateWarpPointExIcon");
		
		UMiniMapLowerIcons_C_OnCreateWarpPointExIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapLowerIcons.MiniMapLowerIcons_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMiniMapIconBase*                          InIconWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBMiniMapIconBase*                          IconWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapLowerIcons_C::AddIcon(class USBMiniMapIconBase** InIconWidget, int32_t ZOrder, class USBMiniMapIconBase** IconWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapLowerIcons.MiniMapLowerIcons_C.AddIcon");
		
		UMiniMapLowerIcons_C_AddIcon_Params params {};
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InIconWidget != nullptr)
			*InIconWidget = params.InIconWidget;
		if (IconWidget != nullptr)
			*IconWidget = params.IconWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapLowerIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapLowerIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapLowerIcons.MiniMapLowerIcons_C");
		return ptr;
	}

}


