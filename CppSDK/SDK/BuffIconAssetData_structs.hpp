#pragma once

 

// Package: BuffIconAssetData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct BuffIconAssetData.BuffIconAssetData
// 0x0028 (0x0028 - 0x0000)
struct FBuffIconAssetData final
{
public:
	ESBStatusAilmentIconType                      IconType_2_84E7DFA14947119953B80C80A0776A57;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61F2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         No_9_B326E02F42BAD99F8DE0CE9E6573CB77;             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture_5_34B491B44DC57DC82AF78B834FAAF910;        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TextureL_12_69541FDB4F829D578E2AD5846343D66C;      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TextID_17_B0DFA299449DD49AD3C699AF463F5D0B;        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBuff_21_465C83F343F038CA105AF39387B2620D;         // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStatusAilmentPlateType                     Plate_24_E11652614ACE36CF2B33B6A1C16468A4;         // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBuffIconAssetData) == 0x000008, "Wrong alignment on FBuffIconAssetData");
static_assert(sizeof(FBuffIconAssetData) == 0x000028, "Wrong size on FBuffIconAssetData");
static_assert(offsetof(FBuffIconAssetData, IconType_2_84E7DFA14947119953B80C80A0776A57) == 0x000000, "Member 'FBuffIconAssetData::IconType_2_84E7DFA14947119953B80C80A0776A57' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, No_9_B326E02F42BAD99F8DE0CE9E6573CB77) == 0x000004, "Member 'FBuffIconAssetData::No_9_B326E02F42BAD99F8DE0CE9E6573CB77' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, Texture_5_34B491B44DC57DC82AF78B834FAAF910) == 0x000008, "Member 'FBuffIconAssetData::Texture_5_34B491B44DC57DC82AF78B834FAAF910' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, TextureL_12_69541FDB4F829D578E2AD5846343D66C) == 0x000010, "Member 'FBuffIconAssetData::TextureL_12_69541FDB4F829D578E2AD5846343D66C' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, TextID_17_B0DFA299449DD49AD3C699AF463F5D0B) == 0x000018, "Member 'FBuffIconAssetData::TextID_17_B0DFA299449DD49AD3C699AF463F5D0B' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, bBuff_21_465C83F343F038CA105AF39387B2620D) == 0x000020, "Member 'FBuffIconAssetData::bBuff_21_465C83F343F038CA105AF39387B2620D' has a wrong offset!");
static_assert(offsetof(FBuffIconAssetData, Plate_24_E11652614ACE36CF2B33B6A1C16468A4) == 0x000021, "Member 'FBuffIconAssetData::Plate_24_E11652614ACE36CF2B33B6A1C16468A4' has a wrong offset!");

}

