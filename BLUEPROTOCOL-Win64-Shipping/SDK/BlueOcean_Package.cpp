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
	 * 		Name   -> PredefinedFunction UBuoyancyForceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuoyancyForceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.BuoyancyForceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlueOcean.Ocean.GetWaveHeightValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HeightOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TwoIterations                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AOcean::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueOcean.Ocean.GetWaveHeightValue");
		
		AOcean_GetWaveHeightValue_Params params {};
		params.Location = Location;
		params.World = World;
		params.HeightOnly = HeightOnly;
		params.TwoIterations = TwoIterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOcean.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOcean::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.Ocean");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.OceanGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.OceanMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectedGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectedGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.ProjectedGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlueOcean.ProjectedGridComponent.SetProjectedGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FProjectedGridParameters                    Parameters                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UProjectedGridComponent::SetProjectedGrid(const struct FProjectedGridParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueOcean.ProjectedGridComponent.SetProjectedGrid");
		
		UProjectedGridComponent_SetProjectedGrid_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlueOcean.ProjectedGridComponent.GetParameters
	 * 		Flags  -> ()
	 */
	struct FProjectedGridParameters UProjectedGridComponent::GetParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueOcean.ProjectedGridComponent.GetParameters");
		
		UProjectedGridComponent_GetParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectedGridComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectedGridComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.ProjectedGridComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectedGridFrustumComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectedGridFrustumComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlueOcean.ProjectedGridFrustumComponent");
		return ptr;
	}

}


