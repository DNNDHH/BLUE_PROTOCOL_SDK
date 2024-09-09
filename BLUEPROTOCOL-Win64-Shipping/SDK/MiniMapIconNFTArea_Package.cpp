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
	 * 		Name   -> Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.SetNFTAreaActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NFTArea_C*                               NFTAreaActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconNFTArea_C::SetNFTAreaActor(class ABP_NFTArea_C* NFTAreaActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.SetNFTAreaActor");
		
		UMiniMapIconNFTArea_C_SetNFTAreaActor_Params params {};
		params.NFTAreaActor = NFTAreaActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.ExecuteUbergraph_MiniMapIconNFTArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconNFTArea_C::ExecuteUbergraph_MiniMapIconNFTArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconNFTArea.MiniMapIconNFTArea_C.ExecuteUbergraph_MiniMapIconNFTArea");
		
		UMiniMapIconNFTArea_C_ExecuteUbergraph_MiniMapIconNFTArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIconNFTArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconNFTArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconNFTArea.MiniMapIconNFTArea_C");
		return ptr;
	}

}


