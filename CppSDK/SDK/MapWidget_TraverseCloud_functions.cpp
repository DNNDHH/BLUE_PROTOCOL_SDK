#pragma once

 

// Package: MapWidget_TraverseCloud

#include "Basic.hpp"

#include "MapWidget_TraverseCloud_classes.hpp"
#include "MapWidget_TraverseCloud_parameters.hpp"


namespace SDK
{

// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.ExecuteUbergraph_MapWidget_TraverseCloud
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TraverseCloud_C::ExecuteUbergraph_MapWidget_TraverseCloud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TraverseCloud_C", "ExecuteUbergraph_MapWidget_TraverseCloud");

	Params::MapWidget_TraverseCloud_C_ExecuteUbergraph_MapWidget_TraverseCloud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Floor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InMapSizeScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_TraverseCloud_C::Update(const class FString& InMapId, int32 Floor, const struct FVector2D& InMapSizeScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TraverseCloud_C", "Update");

	Params::MapWidget_TraverseCloud_C_Update Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.Floor = Floor;
	Parms.InMapSizeScale = std::move(InMapSizeScale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.GetZOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMapWidget_TraverseCloud_C::GetZOrder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TraverseCloud_C", "GetZOrder");

	Params::MapWidget_TraverseCloud_C_GetZOrder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateDungeonTraverse
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     CloudCanvas                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Size                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UMapWidget_TraverseCloud_C::OnCreateDungeonTraverse(class UCanvasPanel* CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TraverseCloud_C", "OnCreateDungeonTraverse");

	Params::MapWidget_TraverseCloud_C_OnCreateDungeonTraverse Parms{};

	Parms.CloudCanvas = CloudCanvas;
	Parms.Param_Name = Param_Name;
	Parms.Position = std::move(Position);
	Parms.Size = std::move(Size);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_TraverseCloud.MapWidget_TraverseCloud_C.OnCreateCloudTraverse
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     CloudCanvas                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Size                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UMapWidget_TraverseCloud_C::OnCreateCloudTraverse(class UCanvasPanel* CloudCanvas, class FName Param_Name, const struct FVector2D& Position, const struct FVector2D& Size, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_TraverseCloud_C", "OnCreateCloudTraverse");

	Params::MapWidget_TraverseCloud_C_OnCreateCloudTraverse Parms{};

	Parms.CloudCanvas = CloudCanvas;
	Parms.Param_Name = Param_Name;
	Parms.Position = std::move(Position);
	Parms.Size = std::move(Size);
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

