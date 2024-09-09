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
	 * 		Name   -> PredefinedFunction ADungeonPartsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADungeonPartsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.DungeonPartsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDungeonPartsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDungeonPartsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.DungeonPartsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDungeonPartsGroupComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDungeonPartsGroupComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.DungeonPartsGroupComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHierarchicalInstancedStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHierarchicalInstancedStaticMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.HierarchicalInstancedStaticMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInstancedStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInstancedStaticMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.InstancedStaticMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallBase.Rebuild
	 * 		Flags  -> ()
	 */
	void ALandscapeWallBase::Rebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallBase.Rebuild");
		
		ALandscapeWallBase_Rebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallBase.GetWallComponent
	 * 		Flags  -> ()
	 */
	class ULandscapeWallComponent* ALandscapeWallBase::GetWallComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallBase.GetWallComponent");
		
		ALandscapeWallBase_GetWallComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallBase.GetHalfThickness
	 * 		Flags  -> ()
	 */
	float ALandscapeWallBase::GetHalfThickness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallBase.GetHalfThickness");
		
		ALandscapeWallBase_GetHalfThickness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallBase.GetHalfHeight
	 * 		Flags  -> ()
	 */
	float ALandscapeWallBase::GetHalfHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallBase.GetHalfHeight");
		
		ALandscapeWallBase_GetHalfHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallBase.GetDecalClass
	 * 		Flags  -> ()
	 */
	class UClass* ALandscapeWallBase::GetDecalClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallBase.GetDecalClass");
		
		ALandscapeWallBase_GetDecalClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeWallBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeWallBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.LandscapeWallBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeWallComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeWallComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.LandscapeWallComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelExtension.LandscapeWallSpline.GetSplineComponent
	 * 		Flags  -> ()
	 */
	class ULandscapeWallSplineComponent* ALandscapeWallSpline::GetSplineComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelExtension.LandscapeWallSpline.GetSplineComponent");
		
		ALandscapeWallSpline_GetSplineComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALandscapeWallSpline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeWallSpline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.LandscapeWallSpline");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULandscapeWallSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeWallSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LevelExtension.LandscapeWallSplineComponent");
		return ptr;
	}

}


