#pragma once

 

// Package: ST_WeaponForCapture_Info

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_WeaponForCapture_Info.ST_WeaponForCapture_Info
// 0x0058 (0x0058 - 0x0000)
struct FST_WeaponForCapture_Info final
{
public:
	ESBWeaponType                                 WeaponType_48_A022EED54B9D783A48C5388EAF2FD1DD;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1690[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MainWeaponNum_8_8EC6E9D944637F4B64650DB0D596EEC4;  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1691[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        MainWeaponLocationOffsets_40_4B3DA95C49ED6E36BA654993DDD0F10B; // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<struct FRotator>                       MainWeaponRotations_27_E82641394E4333B112624EBCF67287FF; // 0x0020(0x0010)(Edit, BlueprintVisible)
	struct FVector                                SubWeaponLocationOffset_41_8E2422274DD5591893B6939B3F431E66; // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SubWeaponRotation_28_62B2D8F04BDA0247EA317BA97258254A; // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CaptureCameraMoveUpOffset_42_08805AE44C667E6FCB6D708214812281; // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraMoveDownOffset_45_5D3D7608464E5D0443E2F7A43A3BFAA5; // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraZoomInOffset_38_9DA83ACD497081901645E080B783F206; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCameraZoomOutOffset_39_DA2D5FAF4443EF7E9EE37388B942521A; // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_WeaponForCapture_Info) == 0x000008, "Wrong alignment on FST_WeaponForCapture_Info");
static_assert(sizeof(FST_WeaponForCapture_Info) == 0x000058, "Wrong size on FST_WeaponForCapture_Info");
static_assert(offsetof(FST_WeaponForCapture_Info, WeaponType_48_A022EED54B9D783A48C5388EAF2FD1DD) == 0x000000, "Member 'FST_WeaponForCapture_Info::WeaponType_48_A022EED54B9D783A48C5388EAF2FD1DD' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D) == 0x000004, "Member 'FST_WeaponForCapture_Info::ModelScale_5_15AEDC0C4395B91CFB1E40ABC21C0C7D' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, MainWeaponNum_8_8EC6E9D944637F4B64650DB0D596EEC4) == 0x000008, "Member 'FST_WeaponForCapture_Info::MainWeaponNum_8_8EC6E9D944637F4B64650DB0D596EEC4' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, MainWeaponLocationOffsets_40_4B3DA95C49ED6E36BA654993DDD0F10B) == 0x000010, "Member 'FST_WeaponForCapture_Info::MainWeaponLocationOffsets_40_4B3DA95C49ED6E36BA654993DDD0F10B' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, MainWeaponRotations_27_E82641394E4333B112624EBCF67287FF) == 0x000020, "Member 'FST_WeaponForCapture_Info::MainWeaponRotations_27_E82641394E4333B112624EBCF67287FF' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, SubWeaponLocationOffset_41_8E2422274DD5591893B6939B3F431E66) == 0x000030, "Member 'FST_WeaponForCapture_Info::SubWeaponLocationOffset_41_8E2422274DD5591893B6939B3F431E66' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, SubWeaponRotation_28_62B2D8F04BDA0247EA317BA97258254A) == 0x00003C, "Member 'FST_WeaponForCapture_Info::SubWeaponRotation_28_62B2D8F04BDA0247EA317BA97258254A' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, CaptureCameraMoveUpOffset_42_08805AE44C667E6FCB6D708214812281) == 0x000048, "Member 'FST_WeaponForCapture_Info::CaptureCameraMoveUpOffset_42_08805AE44C667E6FCB6D708214812281' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, CaptureCameraMoveDownOffset_45_5D3D7608464E5D0443E2F7A43A3BFAA5) == 0x00004C, "Member 'FST_WeaponForCapture_Info::CaptureCameraMoveDownOffset_45_5D3D7608464E5D0443E2F7A43A3BFAA5' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, CaptureCameraZoomInOffset_38_9DA83ACD497081901645E080B783F206) == 0x000050, "Member 'FST_WeaponForCapture_Info::CaptureCameraZoomInOffset_38_9DA83ACD497081901645E080B783F206' has a wrong offset!");
static_assert(offsetof(FST_WeaponForCapture_Info, CaptureCameraZoomOutOffset_39_DA2D5FAF4443EF7E9EE37388B942521A) == 0x000054, "Member 'FST_WeaponForCapture_Info::CaptureCameraZoomOutOffset_39_DA2D5FAF4443EF7E9EE37388B942521A' has a wrong offset!");

}

