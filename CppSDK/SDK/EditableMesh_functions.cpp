#pragma once

 

// Package: EditableMesh

#include "Basic.hpp"

#include "EditableMesh_classes.hpp"
#include "EditableMesh_parameters.hpp"


namespace SDK
{

// Function EditableMesh.EditableMesh.InvalidEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::InvalidEdgeID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "InvalidEdgeID");

	Params::EditableMesh_InvalidEdgeID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonGroupID                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "InvalidPolygonGroupID");

	Params::EditableMesh_InvalidPolygonGroupID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidPolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonID                       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::InvalidPolygonID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "InvalidPolygonID");

	Params::EditableMesh_InvalidPolygonID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.InvalidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVertexID                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::InvalidVertexID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "InvalidVertexID");

	Params::EditableMesh_InvalidVertexID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   EdgeIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::MakeEdgeID(const int32 EdgeIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "MakeEdgeID");

	Params::EditableMesh_MakeEdgeID Parms{};

	Parms.EdgeIndex = EdgeIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   PolygonGroupIndex                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(const int32 PolygonGroupIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "MakePolygonGroupID");

	Params::EditableMesh_MakePolygonGroupID Parms{};

	Parms.PolygonGroupIndex = PolygonGroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakePolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   PolygonIndex                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::MakePolygonID(const int32 PolygonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "MakePolygonID");

	Params::EditableMesh_MakePolygonID Parms{};

	Parms.PolygonIndex = PolygonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.MakeVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   VertexIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::MakeVertexID(const int32 VertexIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMesh", "MakeVertexID");

	Params::EditableMesh_MakeVertexID Parms{};

	Parms.VertexIndex = VertexIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupForPolygon>  PolygonGroupForPolygons                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedPolygonGroups                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::AssignPolygonsToPolygonGroups(const TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "AssignPolygonsToPolygonGroups");

	Params::EditableMesh_AssignPolygonsToPolygonGroups Parms{};

	Parms.PolygonGroupForPolygons = std::move(PolygonGroupForPolygons);
	Parms.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.BevelPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   BevelFixedDistance                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   BevelProgressTowardCenter                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewCenterPolygonIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewSidePolygonIDs                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::BevelPolygons(const TArray<struct FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "BevelPolygons");

	Params::EditableMesh_BevelPolygons Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);
	Parms.BevelFixedDistance = BevelFixedDistance;
	Parms.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = std::move(Parms.OutNewCenterPolygonIDs);

	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = std::move(Parms.OutNewSidePolygonIDs);
}


// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChangeVertexInstancesForPolygon>VertexInstancesForPolygons                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::ChangePolygonsVertexInstances(const TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ChangePolygonsVertexInstances");

	Params::EditableMesh_ChangePolygonsVertexInstances Parms{};

	Parms.VertexInstancesForPolygons = std::move(VertexInstancesForPolygons);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.Commit
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh::Commit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "Commit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.CommitInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              ComponentToInstanceTo                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CommitInstance");

	Params::EditableMesh_CommitInstance Parms{};

	Parms.ComponentToInstanceTo = ComponentToInstanceTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.CreateEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeToCreate>            EdgesToCreate                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateEdges(const TArray<struct FEdgeToCreate>& EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreateEdges");

	Params::EditableMesh_CreateEdges Parms{};

	Parms.EdgesToCreate = std::move(EdgesToCreate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = std::move(Parms.OutNewEdgeIDs);
}


// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                                   NumVerticesToCreate                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutNewVertexIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreateEmptyVertexRange");

	Params::EditableMesh_CreateEmptyVertexRange Parms{};

	Parms.NumVerticesToCreate = NumVerticesToCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = std::move(Parms.OutNewVertexIDs);
}


// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreateMissingPolygonPerimeterEdges");

	Params::EditableMesh_CreateMissingPolygonPerimeterEdges Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = std::move(Parms.OutNewEdgeIDs);
}


// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupToCreate>    PolygonGroupsToCreate                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID>          OutNewPolygonGroupIDs                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreatePolygonGroups(const TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreatePolygonGroups");

	Params::EditableMesh_CreatePolygonGroups Parms{};

	Parms.PolygonGroupsToCreate = std::move(PolygonGroupsToCreate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = std::move(Parms.OutNewPolygonGroupIDs);
}


// Function EditableMesh.EditableMesh.CreatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToCreate>         PolygonsToCreate                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewPolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreatePolygons(const TArray<struct FPolygonToCreate>& PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreatePolygons");

	Params::EditableMesh_CreatePolygons Parms{};

	Parms.PolygonsToCreate = std::move(PolygonsToCreate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = std::move(Parms.OutNewPolygonIDs);

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = std::move(Parms.OutNewEdgeIDs);
}


// Function EditableMesh.EditableMesh.CreateVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceToCreate>  VertexInstancesToCreate                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID>        OutNewVertexInstanceIDs                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateVertexInstances(const TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreateVertexInstances");

	Params::EditableMesh_CreateVertexInstances Parms{};

	Parms.VertexInstancesToCreate = std::move(VertexInstancesToCreate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = std::move(Parms.OutNewVertexInstanceIDs);
}


// Function EditableMesh.EditableMesh.CreateVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToCreate>          VerticesToCreate                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutNewVertexIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateVertices(const TArray<struct FVertexToCreate>& VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "CreateVertices");

	Params::EditableMesh_CreateVertices Parms{};

	Parms.VerticesToCreate = std::move(VerticesToCreate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = std::move(Parms.OutNewVertexIDs);
}


// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedEdges                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertices                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertexInstances                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteEmptyPolygonGroups                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeleteEdgeAndConnectedPolygons");

	Params::EditableMesh_DeleteEdgeAndConnectedPolygons Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeleteEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>                  EdgeIDsToDelete                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertices                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteEdges(const TArray<struct FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeleteEdges");

	Params::EditableMesh_DeleteEdges Parms{};

	Parms.EdgeIDsToDelete = std::move(EdgeIDsToDelete);
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>                VertexIDsToDelete                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteOrphanVertices(const TArray<struct FVertexID>& VertexIDsToDelete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeleteOrphanVertices");

	Params::EditableMesh_DeleteOrphanVertices Parms{};

	Parms.VertexIDsToDelete = std::move(VertexIDsToDelete);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupID>          PolygonGroupIDs                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::DeletePolygonGroups(const TArray<struct FPolygonGroupID>& PolygonGroupIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeletePolygonGroups");

	Params::EditableMesh_DeletePolygonGroups Parms{};

	Parms.PolygonGroupIDs = std::move(PolygonGroupIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeletePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDsToDelete                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedEdges                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertices                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertexInstances                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteEmptyPolygonGroups                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeletePolygons(const TArray<struct FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeletePolygons");

	Params::EditableMesh_DeletePolygons Parms{};

	Parms.PolygonIDsToDelete = std::move(PolygonIDsToDelete);
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedEdges                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertices                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertexInstances                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDeleteEmptyPolygonGroups                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeleteVertexAndConnectedEdgesAndPolygons");

	Params::EditableMesh_DeleteVertexAndConnectedEdgesAndPolygons Parms{};

	Parms.VertexID = std::move(VertexID);
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceID>        VertexInstanceIDsToDelete                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bDeleteOrphanedVertices                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteVertexInstances(const TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "DeleteVertexInstances");

	Params::EditableMesh_DeleteVertexInstances Parms{};

	Parms.VertexInstanceIDsToDelete = std::move(VertexInstanceIDsToDelete);
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.EndModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bFromUndo                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::EndModification(const bool bFromUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "EndModification");

	Params::EditableMesh_EndModification Parms{};

	Parms.bFromUndo = bFromUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.ExtendEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>                  EdgeIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bWeldNeighbors                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewExtendedEdgeIDs                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtendEdges(const TArray<struct FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ExtendEdges");

	Params::EditableMesh_ExtendEdges Parms{};

	Parms.EdgeIDs = std::move(EdgeIDs);
	Parms.bWeldNeighbors = bWeldNeighbors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = std::move(Parms.OutNewExtendedEdgeIDs);
}


// Function EditableMesh.EditableMesh.ExtendVertices
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>                VertexIDs                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    bOnlyExtendClosestEdge                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReferencePosition                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutNewExtendedVertexIDs                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtendVertices(const TArray<struct FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ExtendVertices");

	Params::EditableMesh_ExtendVertices Parms{};

	Parms.VertexIDs = std::move(VertexIDs);
	Parms.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	Parms.ReferencePosition = std::move(ReferencePosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = std::move(Parms.OutNewExtendedVertexIDs);
}


// Function EditableMesh.EditableMesh.ExtrudePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               Polygons                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   ExtrudeDistance                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bKeepNeighborsTogether                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewExtrudedFrontPolygons                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtrudePolygons(const TArray<struct FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ExtrudePolygons");

	Params::EditableMesh_ExtrudePolygons Parms{};

	Parms.Polygons = std::move(Polygons);
	Parms.ExtrudeDistance = ExtrudeDistance;
	Parms.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = std::move(Parms.OutNewExtrudedFrontPolygons);
}


// Function EditableMesh.EditableMesh.FlipPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::FlipPolygons(const TArray<struct FPolygonID>& PolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "FlipPolygons");

	Params::EditableMesh_FlipPolygons Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::GeneratePolygonTangentsAndNormals(const TArray<struct FPolygonID>& PolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GeneratePolygonTangentsAndNormals");

	Params::EditableMesh_GeneratePolygonTangentsAndNormals Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.InitializeAdapters
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh::InitializeAdapters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "InitializeAdapters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                           Splits                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, const TArray<float>& Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "InsertEdgeLoop");

	Params::EditableMesh_InsertEdgeLoop Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.Splits = std::move(Splits);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = std::move(Parms.OutNewEdgeIDs);
}


// Function EditableMesh.EditableMesh.InsetPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   InsetFixedDistance                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InsetProgressTowardCenter                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EInsetPolygonsMode                      Mode                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewCenterPolygonIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewSidePolygonIDs                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::InsetPolygons(const TArray<struct FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "InsetPolygons");

	Params::EditableMesh_InsetPolygons Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);
	Parms.InsetFixedDistance = InsetFixedDistance;
	Parms.InsetProgressTowardCenter = InsetProgressTowardCenter;
	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = std::move(Parms.OutNewCenterPolygonIDs);

	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = std::move(Parms.OutNewSidePolygonIDs);
}


// Function EditableMesh.EditableMesh.MoveVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToMove>            VerticesToMove                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::MoveVertices(const TArray<struct FVertexToMove>& VerticesToMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "MoveVertices");

	Params::EditableMesh_MoveVertices Parms{};

	Parms.VerticesToMove = std::move(VerticesToMove);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh::PropagateInstanceChanges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "PropagateInstanceChanges");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               OutNewPolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "QuadrangulateMesh");

	Params::EditableMesh_QuadrangulateMesh Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = std::move(Parms.OutNewPolygonIDs);
}


// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh::RebuildRenderMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "RebuildRenderMesh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.Revert
// (Final, Native, Public, BlueprintCallable)

void UEditableMesh::Revert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "Revert");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.RevertInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEditableMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMesh::RevertInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "RevertInstance");

	Params::EditableMesh_RevertInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.SetAllowCompact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bInAllowCompact                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowCompact(const bool bInAllowCompact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetAllowCompact");

	Params::EditableMesh_SetAllowCompact Parms{};

	Parms.bInAllowCompact = bInAllowCompact;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bInAllowSpatialDatabase                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetAllowSpatialDatabase");

	Params::EditableMesh_SetAllowSpatialDatabase Parms{};

	Parms.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetAllowUndo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bInAllowUndo                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowUndo(const bool bInAllowUndo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetAllowUndo");

	Params::EditableMesh_SetAllowUndo Parms{};

	Parms.bInAllowUndo = bInAllowUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForEdge>       AttributesForEdges                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesAttributes(const TArray<struct FAttributesForEdge>& AttributesForEdges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetEdgesAttributes");

	Params::EditableMesh_SetEdgesAttributes Parms{};

	Parms.AttributesForEdges = std::move(AttributesForEdges);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>                  EdgeIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                           EdgesNewCreaseSharpness                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesCreaseSharpness(const TArray<struct FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetEdgesCreaseSharpness");

	Params::EditableMesh_SetEdgesCreaseSharpness Parms{};

	Parms.EdgeIDs = std::move(EdgeIDs);
	Parms.EdgesNewCreaseSharpness = std::move(EdgesNewCreaseSharpness);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetEdgesHardness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>                  EdgeIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<bool>                            EdgesNewIsHard                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesHardness(const TArray<struct FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetEdgesHardness");

	Params::EditableMesh_SetEdgesHardness Parms{};

	Parms.EdgeIDs = std::move(EdgeIDs);
	Parms.EdgesNewIsHard = std::move(EdgesNewIsHard);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>                  EdgeIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                                   MaxDotProductForSoftEdge                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesHardnessAutomatically(const TArray<struct FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetEdgesHardnessAutomatically");

	Params::EditableMesh_SetEdgesHardnessAutomatically Parms{};

	Parms.EdgeIDs = std::move(EdgeIDs);
	Parms.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexAttributesForPolygon>VertexAttributesForPolygons                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetPolygonsVertexAttributes(const TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetPolygonsVertexAttributes");

	Params::EditableMesh_SetPolygonsVertexAttributes Parms{};

	Parms.VertexAttributesForPolygons = std::move(VertexAttributesForPolygons);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NewSubdivisionCount                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetSubdivisionCount(const int32 NewSubdivisionCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetSubdivisionCount");

	Params::EditableMesh_SetSubdivisionCount Parms{};

	Parms.NewSubdivisionCount = NewSubdivisionCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NumTexCoords                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetTextureCoordinateCount(const int32 NumTexCoords)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetTextureCoordinateCount");

	Params::EditableMesh_SetTextureCoordinateCount Parms{};

	Parms.NumTexCoords = NumTexCoords;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertexInstance>AttributesForVertexInstances                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVertexInstancesAttributes(const TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetVertexInstancesAttributes");

	Params::EditableMesh_SetVertexInstancesAttributes Parms{};

	Parms.AttributesForVertexInstances = std::move(AttributesForVertexInstances);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertex>     AttributesForVertices                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVerticesAttributes(const TArray<struct FAttributesForVertex>& AttributesForVertices)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetVerticesAttributes");

	Params::EditableMesh_SetVerticesAttributes Parms{};

	Parms.AttributesForVertices = std::move(AttributesForVertices);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>                VertexIDs                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                           VerticesNewCornerSharpness                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVerticesCornerSharpness(const TArray<struct FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SetVerticesCornerSharpness");

	Params::EditableMesh_SetVerticesCornerSharpness Parms{};

	Parms.VertexIDs = std::move(VertexIDs);
	Parms.VerticesNewCornerSharpness = std::move(VerticesNewCornerSharpness);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.SplitEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                           Splits                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutNewVertexIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, const TArray<float>& Splits, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SplitEdge");

	Params::EditableMesh_SplitEdge Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.Splits = std::move(Splits);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = std::move(Parms.OutNewVertexIDs);
}


// Function EditableMesh.EditableMesh.SplitPolygonalMesh
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPlane                           InPlane                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               PolygonIDs1                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               PolygonIDs2                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  BoundaryIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SplitPolygonalMesh");

	Params::EditableMesh_SplitPolygonalMesh Parms{};

	Parms.InPlane = std::move(InPlane);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PolygonIDs1 != nullptr)
		*PolygonIDs1 = std::move(Parms.PolygonIDs1);

	if (PolygonIDs2 != nullptr)
		*PolygonIDs2 = std::move(Parms.PolygonIDs2);

	if (BoundaryIDs != nullptr)
		*BoundaryIDs = std::move(Parms.BoundaryIDs);
}


// Function EditableMesh.EditableMesh.SplitPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToSplit>          PolygonsToSplit                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutNewEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SplitPolygons(const TArray<struct FPolygonToSplit>& PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SplitPolygons");

	Params::EditableMesh_SplitPolygons Parms{};

	Parms.PolygonsToSplit = std::move(PolygonsToSplit);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = std::move(Parms.OutNewEdgeIDs);
}


// Function EditableMesh.EditableMesh.StartModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMeshModificationType                   MeshModificationType                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EMeshTopologyChange                     MeshTopologyChange                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "StartModification");

	Params::EditableMesh_StartModification Parms{};

	Parms.MeshModificationType = MeshModificationType;
	Parms.MeshTopologyChange = MeshTopologyChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EditableMesh.EditableMesh.TessellatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// ETriangleTessellationMode               TriangleTessellationMode                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewPolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::TessellatePolygons(const TArray<struct FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "TessellatePolygons");

	Params::EditableMesh_TessellatePolygons Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);
	Parms.TriangleTessellationMode = TriangleTessellationMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = std::move(Parms.OutNewPolygonIDs);
}


// Function EditableMesh.EditableMesh.TriangulatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutNewTrianglePolygons                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::TriangulatePolygons(const TArray<struct FPolygonID>& PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "TriangulatePolygons");

	Params::EditableMesh_TriangulatePolygons Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = std::move(Parms.OutNewTrianglePolygons);
}


// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOutWasEdgeRemoved                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       OutNewPolygonID                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "TryToRemovePolygonEdge");

	Params::EditableMesh_TryToRemovePolygonEdge Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = Parms.bOutWasEdgeRemoved;

	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = std::move(Parms.OutNewPolygonID);
}


// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOutWasVertexRemoved                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          OutNewEdgeID                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "TryToRemoveVertex");

	Params::EditableMesh_TryToRemoveVertex Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = Parms.bOutWasVertexRemoved;

	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = std::move(Parms.OutNewEdgeID);
}


// Function EditableMesh.EditableMesh.WeldVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>                VertexIDs                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVertexID                        OutNewVertexID                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::WeldVertices(const TArray<struct FVertexID>& VertexIDs, struct FVertexID* OutNewVertexID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "WeldVertices");

	Params::EditableMesh_WeldVertices Parms{};

	Parms.VertexIDs = std::move(VertexIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNewVertexID != nullptr)
		*OutNewVertexID = std::move(Parms.OutNewVertexID);
}


// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::AnyChangesToUndo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "AnyChangesToUndo");

	Params::EditableMesh_AnyChangesToUndo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UEditableMesh::ComputeBoundingBox() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputeBoundingBox");

	Params::EditableMesh_ComputeBoundingBox Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputeBoundingBoxAndSphere");

	Params::EditableMesh_ComputeBoundingBoxAndSphere Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputePolygonCenter");

	Params::EditableMesh_ComputePolygonCenter Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputePolygonNormal");

	Params::EditableMesh_ComputePolygonNormal Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputePolygonPlane");

	Params::EditableMesh_ComputePolygonPlane Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPolygonID>               PolygonIDs                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutSharedEdgeIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ComputePolygonsSharedEdges(const TArray<struct FPolygonID>& PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "ComputePolygonsSharedEdges");

	Params::EditableMesh_ComputePolygonsSharedEdges Parms{};

	Parms.PolygonIDs = std::move(PolygonIDs);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = std::move(Parms.OutSharedEdgeIDs);
}


// Function EditableMesh.EditableMesh.FindPolygonLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutEdgeLoopEdgeIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutFlippedEdgeIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutReversedEdgeIDPathToTake                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutPolygonIDsToSplit                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "FindPolygonLoop");

	Params::EditableMesh_FindPolygonLoop Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = std::move(Parms.OutEdgeLoopEdgeIDs);

	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = std::move(Parms.OutFlippedEdgeIDs);

	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = std::move(Parms.OutReversedEdgeIDPathToTake);

	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = std::move(Parms.OutPolygonIDsToSplit);
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        EdgeVertexID0                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        EdgeVertexID1                                          (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "FindPolygonPerimeterEdgeNumberForVertices");

	Params::EditableMesh_FindPolygonPerimeterEdgeNumberForVertices Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.EdgeVertexID0 = std::move(EdgeVertexID0);
	Parms.EdgeVertexID1 = std::move(EdgeVertexID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "FindPolygonPerimeterVertexNumberForVertex");

	Params::EditableMesh_FindPolygonPerimeterVertexNumberForVertex Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ConnectedPolygonNumber                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, const int32 ConnectedPolygonNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygon");

	Params::EditableMesh_GetEdgeConnectedPolygon Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygonCount");

	Params::EditableMesh_GetEdgeConnectedPolygonCount Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutConnectedPolygonIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygons");

	Params::EditableMesh_GetEdgeConnectedPolygons Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}


// Function EditableMesh.EditableMesh.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetEdgeCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeCount");

	Params::EditableMesh_GetEdgeCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  EdgeLoopIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeLoopElements");

	Params::EditableMesh_GetEdgeLoopElements Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = std::move(Parms.EdgeLoopIDs);
}


// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID0                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        VertexID1                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeThatConnectsVertices");

	Params::EditableMesh_GetEdgeThatConnectsVertices Parms{};

	Parms.VertexID0 = std::move(VertexID0);
	Parms.VertexID1 = std::move(VertexID1);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   EdgeVertexNumber                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, const int32 EdgeVertexNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeVertex");

	Params::EditableMesh_GetEdgeVertex Parms{};

	Parms.EdgeID = std::move(EdgeID);
	Parms.EdgeVertexNumber = EdgeVertexNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetEdgeVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        OutEdgeVertexID0                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        OutEdgeVertexID1                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetEdgeVertices");

	Params::EditableMesh_GetEdgeVertices Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = std::move(Parms.OutEdgeVertexID0);

	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = std::move(Parms.OutEdgeVertexID1);
}


// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetFirstValidPolygonGroup");

	Params::EditableMesh_GetFirstValidPolygonGroup Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID                  ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetGroupForPolygon");

	Params::EditableMesh_GetGroupForPolygon Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutAdjacentPolygons                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonAdjacentPolygons");

	Params::EditableMesh_GetPolygonAdjacentPolygons Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = std::move(Parms.OutAdjacentPolygons);
}


// Function EditableMesh.EditableMesh.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonCount");

	Params::EditableMesh_GetPolygonCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID                  PolygonGroupID                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonCountInGroup");

	Params::EditableMesh_GetPolygonCountInGroup Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonGroupCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonGroupCount");

	Params::EditableMesh_GetPolygonGroupCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID                  PolygonGroupID                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PolygonNumber                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, const int32 PolygonNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonInGroup");

	Params::EditableMesh_GetPolygonInGroup Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);
	Parms.PolygonNumber = PolygonNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PerimeterEdgeNumber                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOutEdgeWindingIsReversedForPolygon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, const int32 PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdge");

	Params::EditableMesh_GetPolygonPerimeterEdge Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = Parms.bOutEdgeWindingIsReversedForPolygon;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdgeCount");

	Params::EditableMesh_GetPolygonPerimeterEdgeCount Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutPolygonPerimeterEdgeIDs                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdges");

	Params::EditableMesh_GetPolygonPerimeterEdges Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = std::move(Parms.OutPolygonPerimeterEdgeIDs);
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PolygonVertexNumber                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, const int32 PolygonVertexNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertex");

	Params::EditableMesh_GetPolygonPerimeterVertex Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexCount");

	Params::EditableMesh_GetPolygonPerimeterVertexCount Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PolygonVertexNumber                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID                ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, const int32 PolygonVertexNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstance");

	Params::EditableMesh_GetPolygonPerimeterVertexInstance Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID>        OutPolygonPerimeterVertexInstanceIDs                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstances");

	Params::EditableMesh_GetPolygonPerimeterVertexInstances Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = std::move(Parms.OutPolygonPerimeterVertexInstanceIDs);
}


// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutPolygonPerimeterVertexIDs                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertices");

	Params::EditableMesh_GetPolygonPerimeterVertices Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = std::move(Parms.OutPolygonPerimeterVertexIDs);
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PolygonTriangleNumber                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTriangleID                      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32 PolygonTriangleNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangle");

	Params::EditableMesh_GetPolygonTriangulatedTriangle Parms{};

	Parms.PolygonID = std::move(PolygonID);
	Parms.PolygonTriangleNumber = PolygonTriangleNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangleCount");

	Params::EditableMesh_GetPolygonTriangulatedTriangleCount Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetSubdivisionCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetSubdivisionCount");

	Params::EditableMesh_GetSubdivisionCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FSubdivisionLimitData      ReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

const struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetSubdivisionLimitData");

	Params::EditableMesh_GetSubdivisionLimitData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetTextureCoordinateCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetTextureCoordinateCount");

	Params::EditableMesh_GetTextureCoordinateCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>                OutAdjacentVertexIDs                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexAdjacentVertices");

	Params::EditableMesh_GetVertexAdjacentVertices Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = std::move(Parms.OutAdjacentVertexIDs);
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ConnectedEdgeNumber                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, const int32 ConnectedEdgeNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdge");

	Params::EditableMesh_GetVertexConnectedEdge Parms{};

	Parms.VertexID = std::move(VertexID);
	Parms.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdgeCount");

	Params::EditableMesh_GetVertexConnectedEdgeCount Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>                  OutConnectedEdgeIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdges");

	Params::EditableMesh_GetVertexConnectedEdges Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = std::move(Parms.OutConnectedEdgeIDs);
}


// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutConnectedPolygonIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexConnectedPolygons");

	Params::EditableMesh_GetVertexConnectedPolygons Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}


// Function EditableMesh.EditableMesh.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexCount");

	Params::EditableMesh_GetVertexCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ConnectedPolygonNumber                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                       ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, const int32 ConnectedPolygonNumber) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygon");

	Params::EditableMesh_GetVertexInstanceConnectedPolygon Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);
	Parms.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygonCount");

	Params::EditableMesh_GetVertexInstanceConnectedPolygonCount Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutConnectedPolygonIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygons");

	Params::EditableMesh_GetVertexInstanceConnectedPolygons Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = std::move(Parms.OutConnectedPolygonIDs);
}


// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexInstanceCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexInstanceCount");

	Params::EditableMesh_GetVertexInstanceCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID                VertexInstanceID                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexInstanceVertex");

	Params::EditableMesh_GetVertexInstanceVertex Parms{};

	Parms.VertexInstanceID = std::move(VertexInstanceID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                        NextVertexID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOutEdgeWindingIsReversed                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "GetVertexPairEdge");

	Params::EditableMesh_GetVertexPairEdge Parms{};

	Parms.VertexID = std::move(VertexID);
	Parms.NextVertexID = std::move(NextVertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = Parms.bOutEdgeWindingIsReversed;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsBeingModified
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsBeingModified() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsBeingModified");

	Params::EditableMesh_IsBeingModified Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommitted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCommitted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsCommitted");

	Params::EditableMesh_IsCommitted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCommittedAsInstance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsCommittedAsInstance");

	Params::EditableMesh_IsCommittedAsInstance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsCompactAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCompactAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsCompactAllowed");

	Params::EditableMesh_IsCompactAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsOrphanedVertex");

	Params::EditableMesh_IsOrphanedVertex Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsPreviewingSubdivisions() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsPreviewingSubdivisions");

	Params::EditableMesh_IsPreviewingSubdivisions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsSpatialDatabaseAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsSpatialDatabaseAllowed");

	Params::EditableMesh_IsSpatialDatabaseAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsUndoAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsUndoAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsUndoAllowed");

	Params::EditableMesh_IsUndoAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                          EdgeID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsValidEdge");

	Params::EditableMesh_IsValidEdge Parms{};

	Parms.EdgeID = std::move(EdgeID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                       PolygonID                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsValidPolygon");

	Params::EditableMesh_IsValidPolygon Parms{};

	Parms.PolygonID = std::move(PolygonID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID                  PolygonGroupID                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsValidPolygonGroup");

	Params::EditableMesh_IsValidPolygonGroup Parms{};

	Parms.PolygonGroupID = std::move(PolygonGroupID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.IsValidVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                        VertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "IsValidVertex");

	Params::EditableMesh_IsValidVertex Parms{};

	Parms.VertexID = std::move(VertexID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlane>                   Planes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutPolygons                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(const TArray<struct FPlane>& Planes, TArray<struct FPolygonID>* OutPolygons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsInVolume");

	Params::EditableMesh_SearchSpatialDatabaseForPolygonsInVolume Parms{};

	Parms.Planes = std::move(Planes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygons != nullptr)
		*OutPolygons = std::move(Parms.OutPolygons);
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          LineSegmentStart                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          LineSegmentEnd                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutPolygons                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	Params::EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment Parms{};

	Parms.LineSegmentStart = std::move(LineSegmentStart);
	Parms.LineSegmentEnd = std::move(LineSegmentEnd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygons != nullptr)
		*OutPolygons = std::move(Parms.OutPolygons);
}


// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlane                           InPlane                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>               OutPolygons                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");

	Params::EditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane Parms{};

	Parms.InPlane = std::move(InPlane);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPolygons != nullptr)
		*OutPolygons = std::move(Parms.OutPolygons);
}


// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*              PrimitiveComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   LODIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMeshFactory::MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, const int32 LODIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EditableMeshFactory", "MakeEditableMesh");

	Params::EditableMeshFactory_MakeEditableMesh Parms{};

	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.LODIndex = LODIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
