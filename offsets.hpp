
#pragma once

#include <cstddef>
#include <cstdint>

// ============================================================================
//  SINGLE SOURCE OF TRUTH FOR ALL CS2 OFFSETS
//  Build: 14201
//  Generated source: a2x/cs2-dumper
//  Dump date: 2026-11-24
//
//  CS2 update ke baad:
//    - od::build
//    - od::view_matrix / od::view_angles
//    - od::build_number
//    - od::generated::*
//
//  NOTE:
//  Original pattern/schema/entity/hitbox/BVH constants are preserved.
//  Only generated values are taken from output.zip.
// ============================================================================

namespace od
{
    // ---- build -------------------------------------------------------------
    inline constexpr int build{ 14201 };

    // ---- client.dll static RVAs --------------------------------------------
    inline constexpr std::uintptr_t view_matrix{ 0x25643D0 };
    inline constexpr std::uintptr_t view_angles{ 0x2574BE8 };

    // ---- engine2.dll -------------------------------------------------------
    inline constexpr std::uintptr_t build_number{ 0x6B2D1C };

    // ========================================================================
    // GENERATED OFFSETS FROM ZIP
    // ========================================================================

    namespace generated
    {
        // ---- client.dll ----------------------------------------------------
        namespace client
        {
            inline constexpr std::uintptr_t csgo_input{ 0x2574560 };
            inline constexpr std::uintptr_t entity_list{ 0x27145B0 };
            inline constexpr std::uintptr_t game_entity_system{ 0x27145B0 };
            inline constexpr std::uintptr_t highest_entity_index{ 0x2120 };
            inline constexpr std::uintptr_t game_rules{ 0x255E3F8 };
            inline constexpr std::uintptr_t global_vars{ 0x222AAD0 };
            inline constexpr std::uintptr_t glow_manager{ 0x255B110 };
            inline constexpr std::uintptr_t local_player_controller{ 0x2536300 };
            inline constexpr std::uintptr_t local_player_pawn{ 0x255EAB8 };
            inline constexpr std::uintptr_t prediction{ 0x255E9C0 };
            inline constexpr std::uintptr_t view_angles{ 0x2574BE8 };
            inline constexpr std::uintptr_t view_matrix{ 0x25643D0 };
            inline constexpr std::uintptr_t view_render{ 0x2564D98 };
            inline constexpr std::uintptr_t weapon_c4{ 0x24C2C00 };
        }

        // ---- engine2.dll ---------------------------------------------------
        namespace engine2
        {
            inline constexpr std::uintptr_t build_number{ 0x6B2D1C };
            inline constexpr std::uintptr_t network_game_client{ 0x9AFB70 };

            inline constexpr std::uintptr_t client_tick_count{ 0x398 };
            inline constexpr std::uintptr_t delta_tick{ 0x24C };
            inline constexpr std::uintptr_t is_background_map{ 0x2C143F };
            inline constexpr std::uintptr_t local_player{ 0xF8 };
            inline constexpr std::uintptr_t max_clients{ 0x240 };
            inline constexpr std::uintptr_t server_tick_count{ 0x24C };
            inline constexpr std::uintptr_t sign_on_state{ 0x230 };

            inline constexpr std::uintptr_t window_height{ 0x9B42D4 };
            inline constexpr std::uintptr_t window_width{ 0x9B42D0 };
        }

        // ---- inputsystem.dll -----------------------------------------------
        namespace inputsystem
        {
            inline constexpr std::uintptr_t input_system{ 0x46BC0 };
        }

        // ---- matchmaking.dll -----------------------------------------------
        namespace matchmaking
        {
            inline constexpr std::uintptr_t game_types{ 0x1AEFC0 };
        }

        // ---- soundsystem.dll -----------------------------------------------
        namespace soundsystem
        {
            inline constexpr std::uintptr_t sound_system{ 0x532470 };
        }
    }

    // ---- runtime patterns --------------------------------------------------
    namespace pattern
    {
        inline constexpr const char* csgo_input{
            "48 89 05 ? ? ? ? 0F 57 C0 0F 11 05"
        };

        inline constexpr const char* entity_list{
            "48 8B 0D ? ? ? ? 8B FD C1 EF 0E"
        };

        inline constexpr const char* local_player_controller{
            "48 8B 05 ? ? ? ? 41 89 BE"
        };

        inline constexpr const char* global_vars{
            "48 89 15 ? ? ? ? 48 89 42"
        };

        inline constexpr const char* view_matrix{
            "C6 86 F0 12 00 00 01 48 8D 0D ? ? ? ?"
        };

        inline constexpr std::uintptr_t view_matrix_lea{ 0x7 };
    }

    // ---- schema system internals -------------------------------------------
    namespace schema
    {
        inline constexpr std::uintptr_t scope_count{ 0x190 };
        inline constexpr std::uintptr_t scope_data{ 0x198 };
        inline constexpr int scope_max{ 64 };
        inline constexpr std::uintptr_t scope_name{ 0x8 };

        inline constexpr std::uintptr_t bucket_base{ 0x5C0 };
        inline constexpr std::uintptr_t bucket_stride{ 24 };
        inline constexpr std::uintptr_t bucket_uncommitted{ 16 };

        inline constexpr std::uintptr_t class_count{ 0x24 };
        inline constexpr std::uintptr_t class_fields{ 0x30 };

        inline constexpr std::uintptr_t element_key{ 0x0 };
        inline constexpr std::uintptr_t element_next{ 0x8 };
        inline constexpr std::uintptr_t element_data{ 16 };

        inline constexpr std::uintptr_t field_stride{ 0x20 };
        inline constexpr std::uintptr_t field_name{ 0x0 };
        inline constexpr std::uintptr_t field_offset{ 0x10 };
    }

    // ---- entity list / entity decode ---------------------------------------
    namespace entity
    {
        inline constexpr std::uintptr_t chunk_mask{ 0x7fff };
        inline constexpr std::uintptr_t chunk_shift{ 9 };
        inline constexpr std::uintptr_t chunk_base{ 0x10 };
        inline constexpr std::uintptr_t chunk_stride{ 8 };
        inline constexpr std::uintptr_t index_mask{ 0x1ff };
        inline constexpr std::uintptr_t stride{ 112 };

        inline constexpr std::uintptr_t identity{ 0x10 };
        inline constexpr std::uintptr_t identity_class{ 0x8 };
        inline constexpr std::uintptr_t class_name{ 0x8 };
        inline constexpr std::uintptr_t name_ptr{ 0x8 };
    }

    // ---- global vars -------------------------------------------------------
    namespace gvars
    {
        inline constexpr std::uintptr_t curtime{ 0x30 };
        inline constexpr std::uintptr_t map_name{ 0x188 };
    }

    // ---- CViewRender -------------------------------------------------------
    namespace view
    {
        inline constexpr std::uintptr_t camera{ 0x10 };
        inline constexpr std::uintptr_t origin{ 0x0 };
        inline constexpr std::uintptr_t angles{ 0xC };
        inline constexpr std::uintptr_t fov{ 0x18 };
    }

    // ---- pawn / weapon -----------------------------------------------------
    namespace pawn
    {
        inline constexpr std::uintptr_t bone_cache{ 0x80 };
        inline constexpr std::uintptr_t subclass_vdata{ 0x8 };
        inline constexpr std::uintptr_t interp_time{ 0x290 };
    }

    // ---- hitboxes ----------------------------------------------------------
    namespace hitbox
    {
        inline constexpr std::uintptr_t model_handle{ 0x200 };
        inline constexpr std::uintptr_t cmodel_meshes{ 0x78 };
        inline constexpr std::uintptr_t set{ 0x168 };
        inline constexpr std::uintptr_t count{ 0x28 };
        inline constexpr std::uintptr_t array{ 0x30 };

        inline constexpr std::uintptr_t remap_count{ 0x220 };
        inline constexpr std::uintptr_t remap_table{ 0x228 };
        inline constexpr std::uintptr_t mesh_a{ 0x240 };
        inline constexpr std::uintptr_t mesh_b{ 0x2F0 };

        inline constexpr std::uintptr_t stride{ 0x70 };
        inline constexpr std::uintptr_t index{ 0x48 };
        inline constexpr std::uintptr_t radius{ 0x30 };
        inline constexpr std::uintptr_t mins{ 0x18 };
        inline constexpr std::uintptr_t maxs{ 0x24 };
    }

    // ---- convars -----------------------------------------------------------
    namespace convar
    {
        inline constexpr std::uintptr_t value_ptr{ 0x50 };
        inline constexpr std::uintptr_t value{ 0x58 };
    }

    // ---- physics / BVH ------------------------------------------------------
    // Original values preserved; not verified by this ZIP.
    namespace bvh
    {
        inline constexpr const char* physics_world_pattern{
            "48 8B 0D ? ? ? ? E8 ? ? ? ? C7 87 10 1D 00 00 00 00 80 3F"
        };

        inline constexpr const char* surface_data_pattern{
            "48 63 41 ? 48 8B 0D"
        };

        inline constexpr std::uintptr_t surface_data_lea{ 4 };

        inline constexpr std::uintptr_t world_inner{ 0x30 };
        inline constexpr std::uintptr_t inner_body_array{ 0x110 };
        inline constexpr std::uintptr_t body_array_count{ 0x268 };

        inline constexpr std::uintptr_t body_stride{ 88 };
        inline constexpr std::uintptr_t body_root{ 0x0 };
        inline constexpr std::uintptr_t body_nodes{ 0x18 };
        inline constexpr std::uintptr_t body_shape{ 0x28 };
        inline constexpr std::uintptr_t body_type{ 0x40 };
        inline constexpr std::uint32_t body_type_solid{ 2 };

        inline constexpr std::uintptr_t body_node_count_a{ 0x08 };
        inline constexpr std::uintptr_t body_node_count_b{ 0x10 };

        inline constexpr std::uintptr_t outer_node_stride{ 48 };
        inline constexpr std::uintptr_t outer_node_left{ 12 };
        inline constexpr std::uintptr_t outer_node_shape{ 0x28 };

        inline constexpr std::uintptr_t inner_node_stride{ 32 };
        inline constexpr std::uintptr_t tri_index_stride{ 12 };
        inline constexpr std::uintptr_t vertex_stride{ 12 };

        inline constexpr std::uintptr_t shape_interacts_as{ 0x50 };
        inline constexpr std::uintptr_t shape_penetration{ 0x28 };
        inline constexpr std::uintptr_t shape_scale{ 0xB0 };
        inline constexpr std::uintptr_t shape_hull{ 0xB8 };
        inline constexpr std::uintptr_t shape_mesh{ 0xC0 };
        inline constexpr std::uintptr_t shape_world_pos{ 0x100 };
        inline constexpr std::uintptr_t shape_rotation{ 0x130 };

        inline constexpr std::uintptr_t mesh_buffer_size{ 0xA0 };
        inline constexpr std::uintptr_t mesh_node_count{ 0x18 };
        inline constexpr std::uintptr_t mesh_count_a{ 0x30 };
        inline constexpr std::uintptr_t mesh_count_b{ 0x48 };
        inline constexpr std::uintptr_t mesh_bvh{ 0x20 };
        inline constexpr std::uintptr_t mesh_vertices{ 0x38 };
        inline constexpr std::uintptr_t mesh_triangles{ 0x50 };
        inline constexpr std::uintptr_t mesh_material_count{ 0x90 };
        inline constexpr std::uintptr_t mesh_materials{ 0x98 };

        inline constexpr std::uintptr_t hull_buffer_size{ 0x100 };
        inline constexpr std::uintptr_t hull_vert_count{ 0x88 };
        inline constexpr std::uintptr_t hull_verts{ 0x90 };
        inline constexpr std::uintptr_t hull_edge_count{ 0xA0 };
        inline constexpr std::uintptr_t hull_edges{ 0xA8 };
        inline constexpr std::uintptr_t hull_face_count{ 0xB8 };
        inline constexpr std::uintptr_t hull_faces{ 0xC0 };

        inline constexpr std::uintptr_t hull_hedge_stride{ 4 };
        inline constexpr int hull_face_max_verts{ 64 };

        inline constexpr std::uintptr_t surface_table{ 40 };
        inline constexpr std::uintptr_t surface_entry_stride{ 32 };

        inline constexpr std::uintptr_t surface_count_candidates[5]{
            32, 36, 24, 28, 48
        };
    }
}

// ============================================================================
// RUNTIME OFFSETS
// ============================================================================

class offsets
{
public:
    bool initialize();

    std::uintptr_t csgo_input{ 0 };
    std::uintptr_t entity_list{ 0 };
    std::uintptr_t local_player_controller{ 0 };
    std::uintptr_t global_vars{ 0 };
    std::uintptr_t view_matrix{ 0 };
    std::uintptr_t view_angles{ 0 };
};
